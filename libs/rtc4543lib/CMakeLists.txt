add_library(rtc4543lib INTERFACE)

target_sources(rtc4543lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTC4543lib/src/rtc4543lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC4543lib/src/rtc4543lib.h"
)

target_include_directories(rtc4543lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTC4543lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtc4543lib INTERFACE
    arduino-compat
)
