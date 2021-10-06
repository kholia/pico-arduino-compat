add_library(rbd_light INTERFACE)

target_sources(rbd_light INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Light/src/RBD_Light.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Light/src/RBD_Light.h"
)

target_include_directories(rbd_light INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Light/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbd_light INTERFACE
    arduino-compat
)
