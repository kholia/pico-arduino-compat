add_library(pac-arduino-sigfox-for-mkrfox1200 INTERFACE)

target_sources(pac-arduino-sigfox-for-mkrfox1200 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/src/SigFox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/src/SigFox.h"
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/examples/WeatherMonitor/conversions.h"
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/examples/WeatherMonitorStream/conversions.h"
)

target_include_directories(pac-arduino-sigfox-for-mkrfox1200 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SigFox/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-sigfox-for-mkrfox1200 INTERFACE
    arduino-compat
)
