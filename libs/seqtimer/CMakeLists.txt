add_library(pac-seqtimer INTERFACE)

target_sources(pac-seqtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SeqTimer/src/SeqTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SeqTimer/src/SeqTimer.h"
)

target_include_directories(pac-seqtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SeqTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-seqtimer INTERFACE
    arduino-compat
)
