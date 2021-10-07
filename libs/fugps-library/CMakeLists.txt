add_library(pac-fugps-library INTERFACE)

target_sources(pac-fugps-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FuGPS/src/FuGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FuGPS/src/FuGPS.h"
)

target_include_directories(pac-fugps-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FuGPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fugps-library INTERFACE
    arduino-compat
)
