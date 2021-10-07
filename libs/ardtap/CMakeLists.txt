add_library(pac-ardtap INTERFACE)

target_sources(pac-ardtap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Tap/src/Tap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Tap/src/Tap.h"
)

target_include_directories(pac-ardtap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Tap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardtap INTERFACE
    arduino-compat
)
