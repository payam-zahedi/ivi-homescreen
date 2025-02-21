/*
 * Copyright 2020-2022 Toyota Connected North America
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gl_process_resolver.h"

#include <EGL/egl.h>
#include <dlfcn.h>

#include <cassert>

#include "logging.h"

std::shared_ptr<EglProcessResolver> GlProcessResolver::sInstance = nullptr;

EglProcessResolver::~EglProcessResolver() {
  for (auto const& item : m_handles) {
    dlclose(item.first);
  }
}

int EglProcessResolver::GetHandle(const std::string& lib, void** out_handle) {
  const auto handle = dlopen(lib.c_str(), RTLD_LAZY | RTLD_LOCAL);
#if !defined(NDEBUG)
  if (handle) {
    SPDLOG_DEBUG("dlopen: {}", lib);
  }
#endif

  if (handle == nullptr) {
    return -1;
  }

  *out_handle = handle;

  return 1;
}

void EglProcessResolver::Initialize() {
  void* handle;
  const std::vector<std::string> libs(kGlSoNames,
                                      kGlSoNames + std::size(kGlSoNames));
  for (const auto& name : libs) {
    GetHandle(name, &handle);
    if (handle) {
      m_handles.emplace_back(handle, name);
    } else {
      spdlog::critical("{}: Library not found", name[0]);
      assert(false);
    }
  }
}

void* EglProcessResolver::process_resolver(const char* name) const {
  if (name == nullptr) {
    spdlog::error("gl_proc_resolver for nullptr; ignoring");
    return nullptr;
  }

  void* address;

  for (auto& handle : m_handles) {
    address = dlsym(handle.first, name);
    if (address) {
      SPDLOG_TRACE("{} : {}", name, handle.second);
      return address;
    }
  }
  SPDLOG_TRACE("** process_resolver({})", name);
  address = reinterpret_cast<void*>(eglGetProcAddress(name));

  if (address) {
    return address;
  }

  spdlog::error("process_resolver: could not resolve symbol \"{}\"", name);
  return nullptr;
}
