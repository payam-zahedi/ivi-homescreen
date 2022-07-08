// Copyright 2020 Toyota Connected North America
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <algorithm>
#include <csignal>
#include <sstream>

#include "app.h"

#include <flutter/fml/command_line.h>
#include <flutter/fml/logging.h>

volatile bool running = true;

void SignalHandler(int signal) {
    (void) signal;
    FML_DLOG(INFO) << "Ctl+C";
    running = false;
}

int main(int argc, char **argv) {
    std::vector<std::string> args;
    for (int i = 1; i < argc; ++i) {
        args.emplace_back(argv[i]);
    }

    std::string bundle_path;
    std::string cursor_theme;
    bool disable_cursor = false;
    bool debug_backend = false;
    bool fullscreen = false;
    uint32_t width = 0;
    uint32_t height = 0;
    int32_t accessibility_features = 0;

    auto cl = fml::CommandLineFromArgcArgv(argc, argv);

    if (!cl.options().empty()) {
        if (cl.HasOption("a")) {
            std::string accessibility_feature_flag_str;
            cl.GetOptionValue("a", &accessibility_feature_flag_str);
            if (accessibility_feature_flag_str.empty()) {
                FML_LOG(ERROR) << "--a option (Accessibility Features) requires an argument (e.g. --a=31)";
                return 1;
            }
            accessibility_features =
                    static_cast<int32_t>(std::stol(accessibility_feature_flag_str));
            auto find = "--a=" + accessibility_feature_flag_str;
            auto result = std::find(args.begin(), args.end(), find);
            if (result != args.end()) {
                args.erase(result);
            }
        }
        if (cl.HasOption("b")) {
            cl.GetOptionValue("b", &bundle_path);
            if (bundle_path.empty()) {
                FML_LOG(ERROR)
                << "--b (Bundle Path) option requires an argument (e.g. --b=/usr/share/gallery)";
                return 1;
            }
            FML_DLOG(INFO) << "Bundle Path: " << bundle_path;
            auto find = "--b=" + bundle_path;
            auto result = std::find(args.begin(), args.end(), find);
            if (result != args.end()) {
                args.erase(result);
            }
        }
        if (cl.HasOption("c")) {
            FML_DLOG(INFO) << "Disable Cursor";
            disable_cursor = true;
            auto result = std::find(args.begin(), args.end(), "--c");
            if (result != args.end()) {
                args.erase(result);
            }
        }
        if (cl.HasOption("d")) {
            FML_DLOG(INFO) << "Backend Debug";
            debug_backend = true;
            auto result = std::find(args.begin(), args.end(), "--d");
            if (result != args.end()) {
                args.erase(result);
            }
        }
        if (cl.HasOption("f")) {
            FML_DLOG(INFO) << "Fullscreen";
            fullscreen = true;
            auto result = std::find(args.begin(), args.end(), "--f");
            if (result != args.end()) {
                args.erase(result);
            }
        }
        if (cl.HasOption("w")) {
            std::string width_str;
            cl.GetOptionValue("w", &width_str);
            if (width_str.empty()) {
                FML_LOG(ERROR) << "--w option requires an argument (e.g. --w=720)";
                return 1;
            }
            width = static_cast<uint32_t>(std::stoul(width_str));
            auto find = "--w=" + width_str;
            auto result = std::find(args.begin(), args.end(), find);
            if (result != args.end()) {
                args.erase(result);
            }
        }
        if (cl.HasOption("h")) {
            std::string height_str;
            cl.GetOptionValue("h", &height_str);
            if (height_str.empty()) {
                FML_LOG(ERROR) << "--h option requires an argument (e.g. --w=1280)";
                return 1;
            }
            height = static_cast<uint32_t>(std::stoul(height_str));
            auto find = "--h=" + height_str;
            auto result = std::find(args.begin(), args.end(), find);
            if (result != args.end()) {
                args.erase(result);
            }
        }
        if (cl.HasOption("t")) {
            cl.GetOptionValue("t", &cursor_theme);
            if (cursor_theme.empty()) {
                FML_LOG(ERROR)
                << "--t option requires an argument (e.g. --t=DMZ-White)";
                return 1;
            }
            FML_DLOG(INFO) << "Cursor Theme: " << cursor_theme;
            auto result = std::find(args.begin(), args.end(), "--t");
            if (result != args.end()) {
                args.erase(result);
            }
        }
    }
    if (!width) {
        width = kScreenWidth;
    }
    if (!height) {
        height = kScreenHeight;
    }
    FML_DLOG(INFO) << "Screen Width: " << width;
    FML_DLOG(INFO) << "Screen Height: " << height;

    App app(kApplicationName, args, bundle_path, fullscreen,
            !disable_cursor, debug_backend, width, height, cursor_theme, accessibility_features);

    std::signal(SIGINT, SignalHandler);

    // run the application
    int ret = 0;
    while (running && ret != -1) {
        ret = app.Loop();
    }

    return 0;
}
