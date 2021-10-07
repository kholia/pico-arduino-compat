add_library(pac-ero INTERFACE)

target_sources(pac-ero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/EROCore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/EROBLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/MOTOR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/EROCore.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/EROHardware.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/EROBLE.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/ERO.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/MOTOR.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/Module.h"
  "${CMAKE_CURRENT_LIST_DIR}/ERO/src/PinEro.h"
)

target_include_directories(pac-ero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ERO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ero INTERFACE
    arduino-compat
)
