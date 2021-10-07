add_library(pac-m62429-volume-control-library INTERFACE)

target_sources(pac-m62429-volume-control-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M62429_Arduino_Library/M62429.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M62429_Arduino_Library/M62429.h"
)

target_include_directories(pac-m62429-volume-control-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M62429_Arduino_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m62429-volume-control-library INTERFACE
    arduino-compat
)
