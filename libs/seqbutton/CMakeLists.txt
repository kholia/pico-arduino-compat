add_library(seqbutton INTERFACE)

target_sources(seqbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SeqButton/src/SeqButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SeqButton/src/SeqButton.h"
)

target_include_directories(seqbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SeqButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seqbutton INTERFACE
    arduino-compat
)
