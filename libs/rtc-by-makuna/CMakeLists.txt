add_library(rtc-by-makuna INTERFACE)

target_sources(rtc-by-makuna INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcUtility.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcDS3231.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcDS1302.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcDS3234.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcUtility.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcDS1307.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcTemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/RtcDateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/ThreeWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc/src/EepromAT24C32.h"
)

target_include_directories(rtc-by-makuna INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Rtc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtc-by-makuna INTERFACE
    arduino-compat
)
