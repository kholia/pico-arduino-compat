add_library(adxl345 INTERFACE)

target_sources(adxl345 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ADXL345/src/ADXL345.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ADXL345/src/ADXL345.h"
)

target_include_directories(adxl345 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-ADXL345/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adxl345 INTERFACE
    arduino-compat
)
