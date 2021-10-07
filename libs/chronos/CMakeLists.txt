add_library(pac-chronos INTERFACE)

target_sources(pac-chronos INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Daily.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Weekly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Hourly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/DateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Monthly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Delta.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/ScheduledEvent.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Event.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Yearly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Calendar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/Chronos.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/ChronosConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/Delta.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/Sort.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/timeTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/Event.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/timeExtInc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/test.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/DateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/schedule/ScheduledEvent.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/schedule/Calendar.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/marks/Monthly.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/marks/Hourly.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/marks/marks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/marks/Yearly.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/marks/Weekly.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/marks/Daily.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/platform/platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/platform/timesource.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/platform/timesourceTimelib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Chronos/src/chronosinc/platform/platformArduino.h"
)

target_include_directories(pac-chronos INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Chronos/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-chronos INTERFACE
    arduino-compat
)
