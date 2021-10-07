add_library(pac-tgui INTERFACE)

target_sources(pac-tgui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/lib/ODROID_Si1132/ODROID_Si1132.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/src/tgui-sensors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/src/tgui.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/examples/label minimum example adc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/examples/new ui element example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/examples/new sensor example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/examples/xyPlot label zForce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/examples/full.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/examples/label progressBar runningChart BME280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/lib/ODROID_Si1132/ODROID_Si1132.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/src/tgui-common.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/src/tgui.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/src/tgui-sensors.h"
)

target_include_directories(pac-tgui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tgui/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_pac-adafruit-gfx-library)
endif()

target_link_libraries(pac-tgui INTERFACE
    arduino-compat
    pac-adafruit-gfx-library
)
