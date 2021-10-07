add_library(pac-rbd_capacitance INTERFACE)

target_sources(pac-rbd_capacitance INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Capacitance/src/RBD_Capacitance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RBD_Capacitance/src/RBD_Capacitance.h"
)

target_include_directories(pac-rbd_capacitance INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RBD_Capacitance/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rbd_capacitance INTERFACE
    arduino-compat
)
