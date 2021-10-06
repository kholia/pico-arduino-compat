add_library(fabo-motor-drv8830 INTERFACE)

target_sources(fabo-motor-drv8830 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoMotor-DRV8830-Library/src/FaBoMotor_DRV8830.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoMotor-DRV8830-Library/src/FaBoMotor_DRV8830.h"
)

target_include_directories(fabo-motor-drv8830 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoMotor-DRV8830-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-motor-drv8830 INTERFACE
    arduino-compat
)
