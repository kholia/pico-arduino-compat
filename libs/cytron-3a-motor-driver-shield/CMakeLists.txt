add_library(pac-cytron-3a-motor-driver-shield INTERFACE)

target_sources(pac-cytron-3a-motor-driver-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_Shield3AMotor/src/Cytron_Shield3AMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cytron_Shield3AMotor/src/Cytron_Shield3AMotor.h"
)

target_include_directories(pac-cytron-3a-motor-driver-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cytron_Shield3AMotor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cytron-3a-motor-driver-shield INTERFACE
    arduino-compat
)
