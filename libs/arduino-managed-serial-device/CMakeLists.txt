add_library(pac-arduino-managed-serial-device INTERFACE)

target_sources(pac-arduino-managed-serial-device INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-managed-serial-device/test/instantiate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-managed-serial-device/src/ManagedSerialDevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-managed-serial-device/ManagedSerialDevice.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-managed-serial-device/src/ManagedSerialDevice.h"
)

target_include_directories(pac-arduino-managed-serial-device INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-managed-serial-device/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-managed-serial-device INTERFACE
    arduino-compat
)
