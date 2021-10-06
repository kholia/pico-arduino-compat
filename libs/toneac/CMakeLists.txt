add_library(toneac INTERFACE)

target_sources(toneac INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-toneac/src/toneAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-toneac/src/toneAC.h"
)

target_include_directories(toneac INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-toneac/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(toneac INTERFACE
    arduino-compat
)
