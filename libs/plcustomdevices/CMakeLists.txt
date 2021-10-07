add_library(pac-plcustomdevices INTERFACE)

target_sources(pac-plcustomdevices INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PLCustomDevicesLibrary/src/PLCustomDevices.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PLCustomDevicesLibrary/src/PLCustomDevices.h"
)

target_include_directories(pac-plcustomdevices INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PLCustomDevicesLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-plcustomdevices INTERFACE
    arduino-compat
)
