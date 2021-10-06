add_library(grove-multichannel-gas-sensor INTERFACE)

target_sources(grove-multichannel-gas-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor/MutichannelGasSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor/MutichannelGasSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor/examples/UpdateFrimware/bootloader_atmega168.h"
)

target_include_directories(grove-multichannel-gas-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Mutichannel_Gas_Sensor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-multichannel-gas-sensor INTERFACE
    arduino-compat
)
