add_library(roguemp3 INTERFACE)

target_sources(roguemp3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RogueMP3/RogueMP3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RogueMP3/RogueMP3.h"
  "${CMAKE_CURRENT_LIST_DIR}/RogueMP3/examples/RogueMP3Troubleshoot/HelloRogueMP3.h"
)

target_include_directories(roguemp3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RogueMP3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(roguemp3 INTERFACE
    arduino-compat
)
