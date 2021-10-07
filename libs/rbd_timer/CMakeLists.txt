add_library(pac-rbd_timer INTERFACE)

target_sources(pac-rbd_timer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Timer/src/RBD_Timer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Timer/src/RBD_Timer.h"
)

target_include_directories(pac-rbd_timer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Timer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_timer INTERFACE
    arduino-compat
)
