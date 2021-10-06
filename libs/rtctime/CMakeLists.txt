add_library(rtctime INTERFACE)

target_sources(rtctime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-RTCtime/examples/RTCtime_Example/RTCtimeUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-RTCtime/examples/DS3231_Alarms_and_Temperature/RTCtimeUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-RTCtime/RtcDS3231.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-RTCtime/RtcDS1307.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-RTCtime/examples/RTCtime_Example/RTCtimeUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-RTCtime/examples/DS3231_Alarms_and_Temperature/RTCtimeUtils.h"
)

target_include_directories(rtctime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-RTCtime"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtctime INTERFACE
    arduino-compat
)
