add_library(pac-seeed-arduino-rtc INTERFACE)

target_sources(pac-seeed-arduino-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_RTC/src/DateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_RTC/src/RTC_SAMD51.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_RTC/src/RTC_SAMD21.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_RTC/src/RTC_SAMD51.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_RTC/src/RTC_SAMD21.h"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_RTC/src/DateTime.h"
)

target_include_directories(pac-seeed-arduino-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_Arduino_RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seeed-arduino-rtc INTERFACE
    arduino-compat
)
