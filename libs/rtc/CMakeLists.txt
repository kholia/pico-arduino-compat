add_library(pac-rtc INTERFACE)

target_sources(pac-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/DS1307.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/DateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/PCF8563.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/DS3231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC/src/RTC.h"
)

target_include_directories(pac-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtc INTERFACE
    arduino-compat
)
