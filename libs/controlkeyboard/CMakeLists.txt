add_library(pac-controlkeyboard INTERFACE)

target_sources(pac-controlkeyboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/controlKeyboard/controlKeyboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/controlKeyboard/controlKeyboard.h"
)

target_include_directories(pac-controlkeyboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/controlKeyboard"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-controlkeyboard INTERFACE
    arduino-compat
)
