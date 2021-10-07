add_library(pac-luni INTERFACE)

target_sources(pac-luni INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/Silicon/Port.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/Silicon/I2CPort.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDMeta/DDMeta.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDMCP9808/DDMCP9808.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDServo/DDServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/ByteOrder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/DeviceDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/LogicalUnitInfo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/DeviceTable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/DDHello/DDHello.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/Silicon/I2CPort.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/Silicon/Port.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDMeta/DDMeta.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDMeta/LUMeta.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDMCP9808/LUMCP9808.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDMCP9808/DDMCP9808.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDServo/DDServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src-drivers/DDServo/LUServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/LuniLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/ClientReporter.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/DeviceDriver.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/ByteOrder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/SemVer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/Boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/DeviceError.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/DeviceDefine.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/LogicalUnitInfo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/Device/DeviceTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/DDHello/LUHello.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/src/DDHello/DDHello.h"
  "${CMAKE_CURRENT_LIST_DIR}/Luni/examples/FirmataDDHello/SelectedDeviceDrivers.h"
)

target_include_directories(pac-luni INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Luni/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-luni INTERFACE
    arduino-compat
)
