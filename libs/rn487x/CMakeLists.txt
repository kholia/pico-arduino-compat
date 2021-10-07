add_library(pac-rn487x INTERFACE)

target_sources(pac-rn487x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RN487x/src/iBeacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RN487x/src/RN487x_BLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RN487x/src/EddystoneBeacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RN487x/src/iBeacon.h"
  "${CMAKE_CURRENT_LIST_DIR}/RN487x/src/EddystoneBeacon.h"
  "${CMAKE_CURRENT_LIST_DIR}/RN487x/src/RN487x_CONST.h"
  "${CMAKE_CURRENT_LIST_DIR}/RN487x/src/RN487x_BLE.h"
)

target_include_directories(pac-rn487x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RN487x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rn487x INTERFACE
    arduino-compat
)
