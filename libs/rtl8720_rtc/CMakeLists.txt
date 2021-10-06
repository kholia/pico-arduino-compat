add_library(rtl8720_rtc INTERFACE)

target_sources(rtl8720_rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_RTC/Packages_Patches/realtek/hardware/AmebaD/3.0.8/cores/arduino/avr/pgmspace.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_RTC/src/RTL8720_RTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_RTC/src/DateTime_Generic.h"
  "${CMAKE_CURRENT_LIST_DIR}/RTL8720_RTC/examples/RTL8720_RTC_Time_WiFi/defines.h"
)

target_include_directories(rtl8720_rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTL8720_RTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtl8720_rtc INTERFACE
    arduino-compat
)
