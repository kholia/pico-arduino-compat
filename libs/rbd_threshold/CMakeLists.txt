add_library(rbd_threshold INTERFACE)

target_sources(rbd_threshold INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Threshold/src/RBD_Threshold.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Threshold/src/RBD_Threshold.h"
)

target_include_directories(rbd_threshold INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Threshold/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rbd_threshold INTERFACE
    arduino-compat
)
