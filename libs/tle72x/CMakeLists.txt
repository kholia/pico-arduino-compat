add_library(pac-tle72x INTERFACE)

target_sources(pac-tle72x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLE72X/src/TLE72X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLE72X/src/TLE72X.h"
)

target_include_directories(pac-tle72x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLE72X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tle72x INTERFACE
    arduino-compat
)
