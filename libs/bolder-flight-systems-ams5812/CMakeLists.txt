add_library(pac-bolder-flight-systems-ams5812 INTERFACE)

target_sources(pac-bolder-flight-systems-ams5812 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AMS5812/include/ams5812/ams5812.h"
)

target_include_directories(pac-bolder-flight-systems-ams5812 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AMS5812/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bolder-flight-systems-ams5812 INTERFACE
    arduino-compat
)
