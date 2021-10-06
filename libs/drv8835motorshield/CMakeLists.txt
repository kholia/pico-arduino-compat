add_library(drv8835motorshield INTERFACE)

target_sources(drv8835motorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/drv8835-motor-shield/DRV8835MotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/drv8835-motor-shield/DRV8835MotorShield.h"
)

target_include_directories(drv8835motorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/drv8835-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(drv8835motorshield INTERFACE
    arduino-compat
)
