add_library(pac-rbd_light INTERFACE)

target_sources(pac-rbd_light INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Light/src/RBD_Light.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Light/src/RBD_Light.h"
)

target_include_directories(pac-rbd_light INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Light/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_light INTERFACE
    arduino-compat
)
