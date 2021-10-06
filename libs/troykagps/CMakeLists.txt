add_library(troykagps INTERFACE)

target_sources(troykagps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaGPS/src/TroykaGPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaGPS/src/utility/uartDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaGPS/src/TroykaGPS.h"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaGPS/src/utility/uartDevice.h"
)

target_include_directories(troykagps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaGPS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(troykagps INTERFACE
    arduino-compat
)
