add_library(pac-tinygps INTERFACE)

target_sources(pac-tinygps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyGPS/src/TinyGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGPS/src/TinyGPS.h"
)

target_include_directories(pac-tinygps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyGPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinygps INTERFACE
    arduino-compat
)
