add_library(seqtimer INTERFACE)

target_sources(seqtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SeqTimer/src/SeqTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SeqTimer/src/SeqTimer.h"
)

target_include_directories(seqtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SeqTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(seqtimer INTERFACE
    arduino-compat
)
