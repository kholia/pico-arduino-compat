add_library(arduino_edgecontrol INTERFACE)

target_sources(arduino_edgecontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_LiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Input.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Expander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_SolidStateRelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Latching.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Power.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Watermark.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/lib/ioexpander/TCA6424A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/lib/ioexpander/I2Cdev.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/lib/solidstaterelay/TS13102.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/TimeHelpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/Helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/SensorsData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/AlarmTasks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/TasksHelpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/CustomTasks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/TimeHelpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/Helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/SensorsData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/AlarmTasks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/TasksHelpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/CustomTasks.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/extras/RPC/RPC_DweetBlink_Remote/arduino_secrets.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_SolidStateRelay.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Input.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/Arduino_EdgeControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Power.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Watermark.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Latching.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_Expander.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/EdgeControl_LiquidCrystal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/lib/ioexpander/TCA6424A.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/lib/ioexpander/I2Cdev.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src/lib/solidstaterelay/TS13102.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Storage/StoragePartitions/edge_control_storage_limits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/TasksHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/TimeHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/Helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/AlarmTasks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/SensorsData.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimple/CustomTasks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/TasksHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/TimeHelpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/Helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/AlarmTasks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/SensorsData.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/IrrigationSimpleLCD/CustomTasks.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/RTCClock/Helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/LowPowerDataLogger/Helpers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/examples/Application/LowPowerDataLogger/DebugMode.h"
)

target_include_directories(arduino_edgecontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_EdgeControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(arduino_edgecontrol INTERFACE
    arduino-compat
    official-sd
)
