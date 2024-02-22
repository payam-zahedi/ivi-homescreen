#
# Copyright 2020-2022 Toyota Connected North America
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

macro(ENABLE_TEXTURE texture)

    list(APPEND TEXTURES ${texture})

    string(TOUPPER ${texture} ucase_texture)

    target_compile_definitions(homescreen PRIVATE ENABLE_TEXTURE_${ucase_texture})

endmacro(ENABLE_TEXTURE)

macro(ENABLE_PLUGIN plugin)

    message(STATUS "Enabling Plugin: ${plugin}")

    string(TOUPPER ${plugin} ucase_plugin)

    add_compile_definitions(ENABLE_PLUGIN_${ucase_plugin})

    add_subdirectory(plugins/${plugin})

endmacro(ENABLE_PLUGIN)

macro(ENABLE_VIEW view)

    message(STATUS "Enabling View: ${view}")

    string(TOUPPER ${view} ucase_view)

    add_compile_definitions(-DENABLE_VIEW_${ucase_view})

    add_subdirectory(layer_playground)

endmacro(ENABLE_VIEW)


