add_library(dmoscillator INTERFACE)

target_sources(dmoscillator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DMOscillator/src/dmoscillator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMOscillator/src/dmoscillator.h"
)

target_include_directories(dmoscillator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DMOscillator/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dmoscillator INTERFACE
    arduino-compat
)
