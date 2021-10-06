add_library(tonepitch INTERFACE)

target_sources(tonepitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/ToneUndef.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone440.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone444.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone432.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone434.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone438.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone442.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone446.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Pitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/ToneVerify.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/ToneDefault.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src/Tone436.h"
)

target_include_directories(tonepitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tone-pitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tonepitch INTERFACE
    arduino-compat
)
