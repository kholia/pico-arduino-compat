add_library(tinygps INTERFACE)

target_sources(tinygps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyGPS/src/TinyGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGPS/src/TinyGPS.h"
)

target_include_directories(tinygps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyGPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinygps INTERFACE
    arduino-compat
)
