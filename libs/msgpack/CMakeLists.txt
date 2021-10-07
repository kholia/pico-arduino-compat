add_library(pac-msgpack INTERFACE)

target_sources(pac-msgpack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/tests/original/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/tests/cpp/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/Unpacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/Packer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLogRestoreState.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLogDisable.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLogEnable.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/FileLogger.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/Manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
)

target_include_directories(pac-msgpack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MsgPack"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-msgpack INTERFACE
    arduino-compat
)
