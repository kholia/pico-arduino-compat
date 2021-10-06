add_library(talkingbutton INTERFACE)

target_sources(talkingbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TalkingButton/src/TalkingButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TalkingButton/src/TalkingButton.h"
)

target_include_directories(talkingbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TalkingButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(talkingbutton INTERFACE
    arduino-compat
)
