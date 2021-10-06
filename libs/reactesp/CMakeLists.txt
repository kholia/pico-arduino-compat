add_library(reactesp INTERFACE)

target_sources(reactesp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/src/ReactESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/examples/servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/examples/torture_test/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/examples/minimal/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/src/ReactESP.h"
)

target_include_directories(reactesp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ReactESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(reactesp INTERFACE
    arduino-compat
)
