add_library(fastpid INTERFACE)

target_sources(fastpid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FastPID/test/arduinopid_wrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastPID/test/fastpid_wrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastPID/test/autopid_wrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastPID/src/FastPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FastPID/test/emulation/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/FastPID/src/FastPID.h"
)

target_include_directories(fastpid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FastPID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fastpid INTERFACE
    arduino-compat
)
