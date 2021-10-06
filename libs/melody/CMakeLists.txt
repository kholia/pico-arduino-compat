add_library(melody INTERFACE)

target_sources(melody INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Sequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierIndex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/RealNote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/SingleNoteSequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/SimpleSequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierRepetition.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierDuration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Modifier.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/SequenceParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Note.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/EmptySequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Melody.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierIntensity.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/NoteToSound.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Streamer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Note.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierIndex.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierIntensity.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/NoteToSound.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Modifier.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Sequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/SimpleSequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierDuration.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/RealNote.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/SingleNoteSequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/EmptySequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/SequenceParser.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/Melody.h"
  "${CMAKE_CURRENT_LIST_DIR}/Melody/src/ModifierRepetition.h"
)

target_include_directories(melody INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melody/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(melody INTERFACE
    arduino-compat
)
