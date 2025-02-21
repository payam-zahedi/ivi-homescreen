// @copyright Copyright (c) 2022 Woven Alpha, Inc.
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

#pragma once

#include "config/common.h"

#include <map>
#include <memory>

#include "configuration/configuration.h"
#include "flutter/fml/macros.h"
#include "flutter/shell/platform/common/incoming_message_dispatcher.h"
#include "flutter_desktop_view_controller_state.h"
#include "platform/homescreen/client_wrapper/include/flutter/plugin_registrar_homescreen.h"
#include "wayland/window.h"

#ifdef ENABLE_PLUGIN_COMP_SURF
#include "compositor_surface.h"
#endif
#ifdef ENABLE_PLUGIN_COMP_REGION
#include "plugins/comp_region/comp_region.h"
#endif

class Display;
class Engine;
class Backend;
class PlatformHandler;
class PlatformChannel;
class WaylandWindow;
#if BUILD_BACKEND_HEADLESS
class HeadlessBackend;
#elif BUILD_BACKEND_WAYLAND_DRM
class WaylandDrmBackend;
#elif BUILD_BACKEND_WAYLAND_EGL
class WaylandEglBackend;
#elif BUILD_BACKEND_WAYLAND_VULKAN
class WaylandVulkanBackend;
#endif
#ifdef ENABLE_PLUGIN_COMP_SURF
class CompositorSurface;
#endif

class FlutterView {
 public:
  FlutterView(Configuration::Config config,
              size_t index,
              const std::shared_ptr<Display>& display);
  ~FlutterView();

  /**
   * @brief Run Tasks
   * @return void
   * @relation
   * wayland, flutter
   */
  void RunTasks();

  /**
   * @brief Initialize
   * @return void
   * @relation
   * wayland, flutter
   */
  void Initialize();

  /**
   * @brief Get Egl Window
   * @return shared_ptr<WaylandWindow>
   * @retval Egl Window
   * @relation
   * wayland, flutter
   */
  std::shared_ptr<WaylandWindow> GetWindow() { return m_wayland_window; }

  /**
   * @brief Get Backend
   * @return Backend*
   * @retval Backend pointer
   * @relation
   * wayland, flutter
   */
  NODISCARD Backend* GetBackend() const {
    return reinterpret_cast<Backend*>(m_backend.get());
  }

  /**
   * @brief Get an index of flutter views
   * @return uint64_t
   * @retval index
   * @relation
   * internal
   */
  NODISCARD uint64_t GetIndex() const { return m_index; }

  /**
   * @brief Get pointer to Display object
   * @return Display*
   * @relation
   * internal
   */
  NODISCARD Display* GetDisplay() const { return m_wayland_display.get(); }

  /**
   * @brief Draw FPS to calc and output
   * @param[in] end_time End time
   * @return void
   * @relation
   * wayland, flutter
   */
  void DrawFps(long long end_time);

#ifdef ENABLE_PLUGIN_COMP_SURF
  /**
   * @brief Create a surface ofr a compositor surface plugin
   * @param[in] h_module Handle of a module
   * @param[in] assets_path Path of assets
   * @param[in] cache_path Path of cache
   * @param[in] misc_path Path of misc
   * @param[in] type Type of a surface
   * @param[in] z_order Z order of a surface
   * @param[in] sync Sync of a surface
   * @param[in] width Width of a surface
   * @param[in] height Height of a surface
   * @param[in] x X of a surface
   * @param[in] y Y of a surface
   * @return size_t
   * @retval a memory size of a surface
   * @relation
   * plugin, wayland
   */
  size_t CreateSurface(void* h_module,
                       const std::string& assets_path,
                       const std::string& cache_path,
                       const std::string& misc_path,
                       CompositorSurface::PARAM_SURFACE_T type,
                       CompositorSurface::PARAM_Z_ORDER_T z_order,
                       CompositorSurface::PARAM_SYNC_T sync,
                       int width,
                       int height,
                       int32_t x,
                       int32_t y);

  /**
   * @brief Dispose a surface of a compositor surface plugin
   * @param[in] index Index of a surface
   * @return void
   * @relation
   * plugin, wayland
   */
  void DisposeSurface(int64_t index);

  typedef std::map<int64_t, std::unique_ptr<CompositorSurface>> surface_array_t;
  surface_array_t m_comp_surf;

  /**
   * @brief Get a surface context of a compositor surface plugin
   * @param[in] index Index of a surface
   * @return void*
   * @retval a surface context
   * @relation
   * plugin, wayland
   */
  void* GetSurfaceContext(int64_t index);
#endif

#ifdef ENABLE_PLUGIN_COMP_REGION
  /**
   * @brief Clear a region of a subsurface
   * @param[in] type Type of a region
   * @return void
   * @relation
   * wayland
   */
  void ClearRegion(const std::string& type) const;

  /**
   * @brief Set a region of a subsurface
   * @param[in] type Type of a region
   * @param[in] regions Regions of subsurfaces
   * @return void
   * @relation
   * wayland
   */
  void SetRegion(
      const std::string& type,
      const std::vector<CompositorRegionPlugin::REGION_T>& regions) const;
#endif

  FML_DISALLOW_COPY_AND_ASSIGN(FlutterView);

 private:
#if BUILD_BACKEND_HEADLESS
  std::shared_ptr<HeadlessBackend> m_backend;
#elif BUILD_BACKEND_WAYLAND_DRM
  std::shared_ptr<WaylandDrmBackend> m_backend;
#elif BUILD_BACKEND_WAYLAND_EGL
  std::shared_ptr<WaylandEglBackend> m_backend;
#elif BUILD_BACKEND_WAYLAND_VULKAN
  std::shared_ptr<WaylandVulkanBackend> m_backend;
#endif
  std::shared_ptr<Display> m_wayland_display;
  std::shared_ptr<WaylandWindow> m_wayland_window;
  std::shared_ptr<Engine> m_flutter_engine;
  const Configuration::Config m_config;
  std::shared_ptr<PlatformChannel> m_platform_channel;
  size_t m_index;

  std::unique_ptr<FlutterDesktopViewControllerState> m_state;

  struct {
    uint8_t output;
    uint32_t period;
    uint32_t counter;
    long long pre_time;
  } m_fps{};

  uint64_t m_pointer_events{};

  static void RegisterPlugins(FlutterDesktopEngineRef engine);
};
