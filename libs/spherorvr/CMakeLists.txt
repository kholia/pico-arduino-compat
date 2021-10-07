add_library(pac-spherorvr INTERFACE)

target_sources(pac-spherorvr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sphero-sdk-arduino-cpp-library-manager/src/structs.h"
  "${CMAKE_CURRENT_LIST_DIR}/sphero-sdk-arduino-cpp-library-manager/src/SpheroRVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/sphero-sdk-arduino-cpp-library-manager/src/DriveControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/sphero-sdk-arduino-cpp-library-manager/src/LEDControl.h"
)

target_include_directories(pac-spherorvr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sphero-sdk-arduino-cpp-library-manager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spherorvr INTERFACE
    arduino-compat
)
