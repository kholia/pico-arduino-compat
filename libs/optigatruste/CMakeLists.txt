add_library(pac-optigatruste INTERFACE)

target_sources(pac-optigatruste INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/OPTIGATrustE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/WireConnector/WireConnector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_data_link_layer.c"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_physical_layer.c"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_hal_arduino.c"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_transport_layer.c"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/OPTIGATrustE.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_data_link_layer.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_hal.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_transport_layer.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/ifx_i2c/ifx_i2c_physical_layer.h"
  "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src/util/WireConnector/WireConnector.h"
)

target_include_directories(pac-optigatruste INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OPTIGA-Trust-E-Security-Controller/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-optigatruste INTERFACE
    arduino-compat
)
