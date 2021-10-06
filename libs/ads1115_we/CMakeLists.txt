add_library(ads1115_we INTERFACE)

target_sources(ads1115_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADS1115_WE/src/ADS1115_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1115_WE/src/ADS1115_WE.h"
)

target_include_directories(ads1115_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADS1115_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ads1115_we INTERFACE
    arduino-compat
)
