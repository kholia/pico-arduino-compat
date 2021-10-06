add_library(goprocontrol INTERFACE)

target_sources(goprocontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GoProControl/src/GoProControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GoProControl/src/Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/GoProControl/src/GoProControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/GoProControl/examples/ArduinoJson/Secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/GoProControl/examples/MultiCam/Secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/GoProControl/examples/GoProControl/Secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/GoProControl/examples/ESP32_FreeRTOS/Secrets.h"
)

target_include_directories(goprocontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GoProControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(goprocontrol INTERFACE
    arduino-compat
)
