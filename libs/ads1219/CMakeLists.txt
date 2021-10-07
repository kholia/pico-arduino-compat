add_library(pac-ads1219 INTERFACE)

target_sources(pac-ads1219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADS1219/ADS1219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1219/ADS1219.h"
)

target_include_directories(pac-ads1219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADS1219"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ads1219 INTERFACE
    arduino-compat
)
