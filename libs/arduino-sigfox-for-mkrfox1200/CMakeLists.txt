add_library(arduino-sigfox-for-mkrfox1200 INTERFACE)

target_sources(arduino-sigfox-for-mkrfox1200 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/src/SigFox.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/src/SigFox.h"
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/examples/WeatherMonitor/conversions.h"
  "${CMAKE_CURRENT_LIST_DIR}/SigFox/examples/WeatherMonitorStream/conversions.h"
)

target_include_directories(arduino-sigfox-for-mkrfox1200 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SigFox/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino-sigfox-for-mkrfox1200 INTERFACE
    arduino-compat
)
