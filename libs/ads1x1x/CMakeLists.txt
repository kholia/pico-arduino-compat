add_library(ads1x1x INTERFACE)

target_sources(ads1x1x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADS1x1x/ADS1x1x.h"
)

target_include_directories(ads1x1x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADS1x1x"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ads1x1x INTERFACE
    arduino-compat
)
