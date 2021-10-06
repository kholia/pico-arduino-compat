add_library(rtc INTERFACE)

target_sources(rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/DS1307.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/DateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/PCF8563.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/DS3231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/RTC.h"
)

target_include_directories(rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtc INTERFACE
    arduino-compat
)
