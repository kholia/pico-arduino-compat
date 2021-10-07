add_library(pac-quickpid INTERFACE)

target_sources(pac-quickpid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QuickPID/src/QuickPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QuickPID/src/analogWrite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QuickPID/src/QuickPID.h"
  "${CMAKE_CURRENT_LIST_DIR}/QuickPID/src/analogWrite.h"
)

target_include_directories(pac-quickpid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QuickPID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-quickpid INTERFACE
    arduino-compat
)
