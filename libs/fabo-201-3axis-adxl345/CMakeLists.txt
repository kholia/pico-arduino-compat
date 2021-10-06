add_library(fabo-201-3axis-adxl345 INTERFACE)

target_sources(fabo-201-3axis-adxl345 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBo3Axis-ADXL345-Library/src/FaBo3Axis_ADXL345.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBo3Axis-ADXL345-Library/src/FaBo3Axis_ADXL345.h"
)

target_include_directories(fabo-201-3axis-adxl345 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBo3Axis-ADXL345-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-201-3axis-adxl345 INTERFACE
    arduino-compat
)
