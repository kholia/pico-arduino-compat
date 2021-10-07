add_library(pac-grove-multichannel-gas-sensor INTERFACE)

target_sources(pac-grove-multichannel-gas-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor/MutichannelGasSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor/MutichannelGasSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor/examples/UpdateFrimware/bootloader_atmega168.h"
)

target_include_directories(pac-grove-multichannel-gas-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-multichannel-gas-sensor INTERFACE
    arduino-compat
)
