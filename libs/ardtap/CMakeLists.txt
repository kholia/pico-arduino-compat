add_library(ardtap INTERFACE)

target_sources(ardtap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Tap/src/Tap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Tap/src/Tap.h"
)

target_include_directories(ardtap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Tap/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ardtap INTERFACE
    arduino-compat
)
