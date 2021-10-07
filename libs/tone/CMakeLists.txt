add_library(pac-tone INTERFACE)

target_sources(pac-tone INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tone/Tone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tone/Tone.h"
)

target_include_directories(pac-tone INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tone"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tone INTERFACE
    arduino-compat
)
