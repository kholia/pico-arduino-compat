add_library(rakwireless-ads7830-library INTERFACE)

target_sources(rakwireless-ads7830-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RAK-ADS7830-Library/src/ADS7830.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RAK-ADS7830-Library/src/ADS7830.h"
)

target_include_directories(rakwireless-ads7830-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RAK-ADS7830-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rakwireless-ads7830-library INTERFACE
    arduino-compat
)
