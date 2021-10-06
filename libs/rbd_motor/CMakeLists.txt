add_library(rbd_motor INTERFACE)

target_sources(rbd_motor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Motor/src/RBD_Motor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Motor/src/RBD_Motor.h"
)

target_include_directories(rbd_motor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Motor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbd_motor INTERFACE
    arduino-compat
)
