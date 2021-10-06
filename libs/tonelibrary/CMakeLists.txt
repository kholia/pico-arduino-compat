add_library(tonelibrary INTERFACE)

target_sources(tonelibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-library/src/Tone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-library/src/Tone.h"
)

target_include_directories(tonelibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tonelibrary INTERFACE
    arduino-compat
)
