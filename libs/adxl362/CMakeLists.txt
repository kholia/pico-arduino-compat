add_library(pac-adxl362 INTERFACE)

target_sources(pac-adxl362 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADXL362/ADXL362.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADXL362/ADXL362.h"
)

target_include_directories(pac-adxl362 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADXL362"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-adxl362 INTERFACE
    arduino-compat
)
