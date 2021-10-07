add_library(pac-lectroboxpcjoyshield INTERFACE)

target_sources(pac-lectroboxpcjoyshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCJoy/src/PCJoy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCJoy/src/PCJoy.h"
)

target_include_directories(pac-lectroboxpcjoyshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCJoy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lectroboxpcjoyshield INTERFACE
    arduino-compat
)
