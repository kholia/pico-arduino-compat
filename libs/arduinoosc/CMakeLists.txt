add_library(pac-arduinoosc INTERFACE)

target_sources(pac-arduinoosc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/examples/openFrameworks/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSCWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSCEther.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OscDecoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/ArduinoOSCCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OscUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OSCServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OSCClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OscEncoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OscMessage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OscTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/OscUdpMap.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLogRestoreState.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLogDisable.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLogEnable.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/FileLogger.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/Manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC/ArduinoOSC/util/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
)

target_include_directories(pac-arduinoosc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoOSC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinoosc INTERFACE
    arduino-compat
)
