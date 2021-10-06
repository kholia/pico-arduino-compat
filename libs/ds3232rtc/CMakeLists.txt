add_library(ds3232rtc INTERFACE)

target_sources(ds3232rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS3232RTC/src/DS3232RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS3232RTC/src/DS3232RTC.h"
)

target_include_directories(ds3232rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS3232RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds3232rtc INTERFACE
    arduino-compat
)
