add_library(pac-easybutton INTERFACE)

target_sources(pac-easybutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/Sequence.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButtonVirtual.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButtonTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButtonBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButtonTouch.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButtonBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/Sequence.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src/EasyButtonVirtual.h"
)

target_include_directories(pac-easybutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easybutton INTERFACE
    arduino-compat
)
