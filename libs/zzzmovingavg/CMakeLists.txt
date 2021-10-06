add_library(zzzmovingavg INTERFACE)

target_sources(zzzmovingavg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZzzMovingAvg/ZzzMovingAvg.h"
)

target_include_directories(zzzmovingavg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZzzMovingAvg"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zzzmovingavg INTERFACE
    arduino-compat
)
