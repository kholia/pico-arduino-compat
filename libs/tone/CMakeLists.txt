add_library(tone INTERFACE)

target_sources(tone INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Tone/Tone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Tone/Tone.h"
)

target_include_directories(tone INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Tone"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tone INTERFACE
    arduino-compat
)
