add_library(pac-cytron-motor-drivers-library INTERFACE)

target_sources(pac-cytron-motor-drivers-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CytronMotorDriver/CytronMotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CytronMotorDriver/CytronMotorDriver.h"
)

target_include_directories(pac-cytron-motor-drivers-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CytronMotorDriver"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cytron-motor-drivers-library INTERFACE
    arduino-compat
)
