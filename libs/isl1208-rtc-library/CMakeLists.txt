add_library(isl1208-rtc-library INTERFACE)

target_sources(isl1208-rtc-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ISL1208-RTC-Library/src/ISL1208_RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ISL1208-RTC-Library/src/ISL1208_RTC.h"
)

target_include_directories(isl1208-rtc-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ISL1208-RTC-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(isl1208-rtc-library INTERFACE
    arduino-compat
)
