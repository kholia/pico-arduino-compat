add_library(pac-servoosc INTERFACE)

target_sources(pac-servoosc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ServoOsc/src/ServoOsc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ServoOsc/src/ServoOsc.h"
)

target_include_directories(pac-servoosc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ServoOsc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-servoosc INTERFACE
    arduino-compat
)
