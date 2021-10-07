add_library(pac-zzzmovingavg INTERFACE)

target_sources(pac-zzzmovingavg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZzzMovingAvg/ZzzMovingAvg.h"
)

target_include_directories(pac-zzzmovingavg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZzzMovingAvg"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zzzmovingavg INTERFACE
    arduino-compat
)
