add_library(rakwireless-ncp5623-rgb-led-library INTERFACE)

target_sources(rakwireless-ncp5623-rgb-led-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAK14001-NCP5623-Library/NCP5623.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAK14001-NCP5623-Library/NCP5623.h"
)

target_include_directories(rakwireless-ncp5623-rgb-led-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAK14001-NCP5623-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rakwireless-ncp5623-rgb-led-library INTERFACE
    arduino-compat
)
