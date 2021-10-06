add_library(m5stack-sd-updater INTERFACE)

target_sources(m5stack-sd-updater INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src/M5StackUpdater.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/SAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src/M5StackUpdater.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src/gitTagVersion.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src/assets.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src/M5StackUpdaterUI.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src/M5StackUpdaterConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src/M5StackUpdaterUITouch.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/wifi_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/controls.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/downloader.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/certificates.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/assets.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/registry.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/SAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/compile_time.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/fsformat.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/menu.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/i18n.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/core.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/registry.default.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/M5Stack-SD-Menu/partition_manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/examples/LGFX-SDLoader-Snippet/M5Stack_Buttons.h"
)

target_include_directories(m5stack-sd-updater INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5Stack-SD-Updater/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(m5stack-sd-updater INTERFACE
    arduino-compat
    official-sd
)
