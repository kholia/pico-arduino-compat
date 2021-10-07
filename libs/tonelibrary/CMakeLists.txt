add_library(pac-tonelibrary INTERFACE)

target_sources(pac-tonelibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-library/src/Tone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-library/src/Tone.h"
)

target_include_directories(pac-tonelibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tonelibrary INTERFACE
    arduino-compat
)
