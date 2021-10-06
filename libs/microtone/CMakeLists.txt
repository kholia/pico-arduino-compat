add_library(microtone INTERFACE)

target_sources(microtone INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MicroTone/src/MicroTone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MicroTone/src/MicroTone.h"
)

target_include_directories(microtone INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MicroTone/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(microtone INTERFACE
    arduino-compat
)
