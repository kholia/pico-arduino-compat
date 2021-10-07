add_library(pac-talkingbutton INTERFACE)

target_sources(pac-talkingbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TalkingButton/src/TalkingButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TalkingButton/src/TalkingButton.h"
)

target_include_directories(pac-talkingbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TalkingButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-talkingbutton INTERFACE
    arduino-compat
)
