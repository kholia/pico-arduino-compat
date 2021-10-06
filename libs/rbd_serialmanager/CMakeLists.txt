add_library(rbd_serialmanager INTERFACE)

target_sources(rbd_serialmanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_SerialManager/src/RBD_SerialManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_SerialManager/src/RBD_SerialManager.h"
)

target_include_directories(rbd_serialmanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_SerialManager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbd_serialmanager INTERFACE
    arduino-compat
)
