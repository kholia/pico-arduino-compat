add_library(pac-grove-temperature-and-humidity-sensor-hdc1000 INTERFACE)

target_sources(pac-grove-temperature-and-humidity-sensor-hdc1000 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HDC1000/HDC1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HDC1000/HDC1000.h"
)

target_include_directories(pac-grove-temperature-and-humidity-sensor-hdc1000 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HDC1000"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-temperature-and-humidity-sensor-hdc1000 INTERFACE
    arduino-compat
)
