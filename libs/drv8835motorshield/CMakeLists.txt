add_library(pac-drv8835motorshield INTERFACE)

target_sources(pac-drv8835motorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/drv8835-motor-shield/DRV8835MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/drv8835-motor-shield/DRV8835MotorShield.h"
)

target_include_directories(pac-drv8835motorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/drv8835-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-drv8835motorshield INTERFACE
    arduino-compat
)
