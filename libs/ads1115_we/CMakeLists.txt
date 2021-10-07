add_library(pac-ads1115_we INTERFACE)

target_sources(pac-ads1115_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADS1115_WE/src/ADS1115_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1115_WE/src/ADS1115_WE.h"
)

target_include_directories(pac-ads1115_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADS1115_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ads1115_we INTERFACE
    arduino-compat
)
