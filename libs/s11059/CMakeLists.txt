add_library(pac-s11059 INTERFACE)

target_sources(pac-s11059 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-S11059/src/S11059.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-S11059/src/S11059.h"
)

target_include_directories(pac-s11059 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-S11059/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-s11059 INTERFACE
    arduino-compat
)
