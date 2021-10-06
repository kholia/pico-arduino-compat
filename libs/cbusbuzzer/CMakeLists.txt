add_library(cbusbuzzer INTERFACE)

target_sources(cbusbuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CBUSBUZZER/src/CBUSBUZZER.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CBUSBUZZER/src/CBUSBUZZER.h"
)

target_include_directories(cbusbuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CBUSBUZZER/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cbusbuzzer INTERFACE
    arduino-compat
)
