add_library(pac-pidcontroller INTERFACE)

target_sources(pac-pidcontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PIDArduino/src/PIDController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PIDArduino/src/PIDController.h"
)

target_include_directories(pac-pidcontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PIDArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pidcontroller INTERFACE
    arduino-compat
)
