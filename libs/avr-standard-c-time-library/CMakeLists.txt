add_library(avr-standard-c-time-library INTERFACE)

target_sources(avr-standard-c-time-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_RTC_Library/src/timer2.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_RTC_Library/src/fatfs_time.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_RTC_Library/src/AVR_RTC.h"
)

target_include_directories(avr-standard-c-time-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_RTC_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(avr-standard-c-time-library INTERFACE
    arduino-compat
)
