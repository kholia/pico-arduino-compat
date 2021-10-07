add_library(pac-cbusbuzzer INTERFACE)

target_sources(pac-cbusbuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUSBUZZER/src/CBUSBUZZER.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUSBUZZER/src/CBUSBUZZER.h"
)

target_include_directories(pac-cbusbuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUSBUZZER/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cbusbuzzer INTERFACE
    arduino-compat
)
