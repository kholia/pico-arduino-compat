add_library(pac-reactesp INTERFACE)

target_sources(pac-reactesp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/src/ReactESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/examples/servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/examples/torture_test/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/examples/minimal/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ReactESP/src/ReactESP.h"
)

target_include_directories(pac-reactesp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ReactESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-reactesp INTERFACE
    arduino-compat
)
