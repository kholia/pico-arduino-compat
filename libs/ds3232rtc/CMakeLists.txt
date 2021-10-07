add_library(pac-ds3232rtc INTERFACE)

target_sources(pac-ds3232rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS3232RTC/src/DS3232RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS3232RTC/src/DS3232RTC.h"
)

target_include_directories(pac-ds3232rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS3232RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds3232rtc INTERFACE
    arduino-compat
)
