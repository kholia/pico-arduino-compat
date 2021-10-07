add_library(pac-adxl345_we INTERFACE)

target_sources(pac-adxl345_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADXL345_WE/src/ADXL345_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADXL345_WE/src/ADXL345_WE.h"
)

target_include_directories(pac-adxl345_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADXL345_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adxl345_we INTERFACE
    arduino-compat
)
