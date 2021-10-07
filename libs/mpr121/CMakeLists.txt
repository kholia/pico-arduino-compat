add_library(pac-mpr121 INTERFACE)

target_sources(pac-mpr121 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPR121/src/MPR121/MPR121.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121/examples/TestTouch/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121/examples/TestMultipleTouchDevices/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121/src/MPR121.h"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121/src/MPR121/MPR121Definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121/examples/TestTouch/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121/examples/TestMultipleTouchDevices/Constants.h"
)

target_include_directories(pac-mpr121 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPR121/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mpr121 INTERFACE
    arduino-compat
)
