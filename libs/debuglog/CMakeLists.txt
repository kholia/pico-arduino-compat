add_library(debuglog INTERFACE)

target_sources(debuglog INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Debug/examples/cpp/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLogRestoreState.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLogDisable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLogEnable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/examples/control_scope/MyClass.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/FileLogger.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/Manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debug/DebugLog/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
)

target_include_directories(debuglog INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Debug"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(debuglog INTERFACE
    arduino-compat
)
