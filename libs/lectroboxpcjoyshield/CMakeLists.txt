add_library(lectroboxpcjoyshield INTERFACE)

target_sources(lectroboxpcjoyshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCJoy/src/PCJoy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCJoy/src/PCJoy.h"
)

target_include_directories(lectroboxpcjoyshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCJoy/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lectroboxpcjoyshield INTERFACE
    arduino-compat
)
