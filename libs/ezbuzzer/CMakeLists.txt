add_library(pac-ezbuzzer INTERFACE)

target_sources(pac-ezbuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/buzzer/src/ezBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/buzzer/src/ezBuzzer.h"
)

target_include_directories(pac-ezbuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/buzzer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ezbuzzer INTERFACE
    arduino-compat
)
