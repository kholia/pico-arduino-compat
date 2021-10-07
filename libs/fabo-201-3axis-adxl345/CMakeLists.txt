add_library(pac-fabo-201-3axis-adxl345 INTERFACE)

target_sources(pac-fabo-201-3axis-adxl345 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBo3Axis-ADXL345-Library/src/FaBo3Axis_ADXL345.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBo3Axis-ADXL345-Library/src/FaBo3Axis_ADXL345.h"
)

target_include_directories(pac-fabo-201-3axis-adxl345 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBo3Axis-ADXL345-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-201-3axis-adxl345 INTERFACE
    arduino-compat
)
