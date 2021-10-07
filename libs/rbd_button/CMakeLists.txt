add_library(pac-rbd_button INTERFACE)

target_sources(pac-rbd_button INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Button/src/RBD_Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Button/src/RBD_Button.h"
)

target_include_directories(pac-rbd_button INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_button INTERFACE
    arduino-compat
)
