add_library(pac-z80retroshield INTERFACE)

target_sources(pac-z80retroshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Z80RetroShield/src/z80retroshield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Z80RetroShield/src/z80retroshield.h"
)

target_include_directories(pac-z80retroshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Z80RetroShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-z80retroshield INTERFACE
    arduino-compat
)
