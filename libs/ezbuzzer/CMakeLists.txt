add_library(ezbuzzer INTERFACE)

target_sources(ezbuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/buzzer/src/ezBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/buzzer/src/ezBuzzer.h"
)

target_include_directories(ezbuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/buzzer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ezbuzzer INTERFACE
    arduino-compat
)
