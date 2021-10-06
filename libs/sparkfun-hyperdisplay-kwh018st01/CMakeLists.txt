add_library(sparkfun-hyperdisplay-kwh018st01 INTERFACE)

target_sources(sparkfun-hyperdisplay-kwh018st01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/src/HyperDisplay_KWH018ST01_4WSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example9_Fractals/BigNumber.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example9_Fractals/number.c"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/src/HyperDisplay_KWH018ST01_4WSPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example999_Testing/bubb.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example999_Testing/bubbs.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example999_Testing/hyperdisplay_custom_conf.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example9_Fractals/BigNumber.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example9_Fractals/bcconfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/examples/Example9_Fractals/number.h"
)

target_include_directories(sparkfun-hyperdisplay-kwh018st01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_KWH018ST01_4WSPI_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-hyperdisplay-kwh018st01 INTERFACE
    arduino-compat
)
