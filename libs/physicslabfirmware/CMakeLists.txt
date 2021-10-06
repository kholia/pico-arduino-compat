add_library(physicslabfirmware INTERFACE)

target_sources(physicslabfirmware INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PhysicsLabFirmware/examples/PhysicsLabFirmware/INA226.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PhysicsLabFirmware/src/PhysicsLabFirmware.h"
  "${CMAKE_CURRENT_LIST_DIR}/PhysicsLabFirmware/examples/PhysicsLabFirmware/INA226.h"
)

target_include_directories(physicslabfirmware INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PhysicsLabFirmware/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(physicslabfirmware INTERFACE
    arduino-compat
)
