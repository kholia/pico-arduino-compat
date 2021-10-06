add_library(moduleinterface INTERFACE)

target_sources(moduleinterface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/utils/MITime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/utils/MIUptime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleVariable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleVariableSet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/MITransferBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_ETCP/ModuleMasterHttp/ModuleMasterHttp/stdafx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_ETCP/ModuleMasterHttp/ModuleMasterHttp/ModuleMasterHttp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/GenericModuleMaster/GenericModuleMaster/GenericModuleMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/GenericModuleMaster/GenericModuleMaster/stdafx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/TestModuleMaster/TestModuleMaster/stdafx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/TestModuleMaster/TestModuleMaster/TestModuleMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/ModuleMasterHttp/ModuleMasterHttp/stdafx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/ModuleMasterHttp/ModuleMasterHttp/ModuleMasterHttp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/GenericModuleMasterMqtt/GenericModuleMasterMqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/GenericModuleMasterMqtt/stdafx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/EventTester/EventTester.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/EventTester/stdafx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MIMaster.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MIModule.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/ModuleVariableSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/utils/MITime.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/utils/MIUptime.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/utils/BinaryBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/utils/MemFrag.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/utils/MIUtilities.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/MITransferBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleInterfaceHttpTransfer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleVariable.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleInterfaceMqttTransfer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleVariableSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleInterfacePersistence.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI/ModuleInterfaceSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI_PJON/PJONModuleInterfaceHttpTransfer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI_PJON/MILink.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI_PJON/PJONModuleInterface.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI_PJON/PJONModuleInterfaceSet.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI_PJON/PJONLink.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI_PJON/PJONModuleInterfaceMqttTransfer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/MI_PJON/PJONPointerLink.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/platforms/MISystemDefines.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src/platforms/MIPlatforms.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/ARDUINO_SWBB/ModuleInterfaceRGBSwitch/ModuleInterfaceRGBSwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_ETCP/ModuleMasterHttp/ModuleMasterHttp/targetver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_ETCP/ModuleMasterHttp/ModuleMasterHttp/stdafx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/GenericModuleMaster/GenericModuleMaster/targetver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/GenericModuleMaster/GenericModuleMaster/stdafx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/TestModuleMaster/TestModuleMaster/targetver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/TestModuleMaster/TestModuleMaster/stdafx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/ModuleMasterHttp/ModuleMasterHttp/targetver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_DUDP/ModuleMasterHttp/ModuleMasterHttp/stdafx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/GenericModuleMasterMqtt/targetver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/GenericModuleMasterMqtt/stdafx.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/EventTester/targetver.h"
  "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/examples/WebPage/WINDOWS_LINUX_LF/GenericModuleMasterMqtt/EventTester/stdafx.h"
)

target_include_directories(moduleinterface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ModuleInterface/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(moduleinterface INTERFACE
    arduino-compat
)
