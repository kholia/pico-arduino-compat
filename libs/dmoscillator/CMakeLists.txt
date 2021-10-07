add_library(pac-dmoscillator INTERFACE)

target_sources(pac-dmoscillator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DMOscillator/src/dmoscillator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMOscillator/src/dmoscillator.h"
)

target_include_directories(pac-dmoscillator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DMOscillator/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmoscillator INTERFACE
    arduino-compat
)
