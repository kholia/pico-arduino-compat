add_library(pac-ps2keyraw INTERFACE)

target_sources(pac-ps2keyraw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyRaw/src/PS2KeyRaw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PS2KeyRaw/src/PS2KeyRaw.h"
)

target_include_directories(pac-ps2keyraw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PS2KeyRaw/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ps2keyraw INTERFACE
    arduino-compat
)
