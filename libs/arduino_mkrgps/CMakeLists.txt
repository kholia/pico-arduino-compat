add_library(pac-arduino_mkrgps INTERFACE)

target_sources(pac-arduino_mkrgps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src/GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src/utility/SerialDDC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src/minmea/minmea.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src/Arduino_MKRGPS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src/GPS.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src/minmea/minmea.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src/utility/SerialDDC.h"
)

target_include_directories(pac-arduino_mkrgps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRGPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_mkrgps INTERFACE
    arduino-compat
)
