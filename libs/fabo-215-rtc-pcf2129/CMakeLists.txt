add_library(pac-fabo-215-rtc-pcf2129 INTERFACE)

target_sources(pac-fabo-215-rtc-pcf2129 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoRTC-PCF2129-Library/src/FaBoRTC_PCF2129.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoRTC-PCF2129-Library/src/FaBoRTC_PCF2129.h"
)

target_include_directories(pac-fabo-215-rtc-pcf2129 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoRTC-PCF2129-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-215-rtc-pcf2129 INTERFACE
    arduino-compat
)
