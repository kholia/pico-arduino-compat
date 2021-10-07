add_library(pac-slight_buttoninput INTERFACE)

target_sources(pac-slight_buttoninput INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_ButtonInput/src/slight_ButtonInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_ButtonInput/examples/slight_ButtonInput__advanced2/myinput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_ButtonInput/src/slight_ButtonInput_CallbackHelper.h"
  "${CMAKE_CURRENT_LIST_DIR}/slight_ButtonInput/src/slight_ButtonInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/slight_ButtonInput/examples/slight_ButtonInput__advanced2/myinput.h"
)

target_include_directories(pac-slight_buttoninput INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_ButtonInput/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-slight_buttoninput INTERFACE
    arduino-compat
)
