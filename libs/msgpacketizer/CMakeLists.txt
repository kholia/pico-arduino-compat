add_library(pac-msgpacketizer INTERFACE)

target_sources(pac-msgpacketizer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/examples/arr_map/openFrameworks/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/examples/simple/openFrameworks/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/examples/nested_custom/openFrameworks/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/Subscriber.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/Publisher.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/Unpacker.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/Packer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLogRestoreState.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLogDisable.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLogEnable.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/FileLogger.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/Manager.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/MsgPack/MsgPack/util/DebugLog/DebugLog/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/Decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/Encoding.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/CRCx/CRCx.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRC_cpu.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRCsw.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRChw.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRC_tables.h"
  "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer/MsgPacketizer/util/Packetizer/Packetizer/util/CRCx/CRCpp/CRCpp.h"
)

target_include_directories(pac-msgpacketizer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MsgPacketizer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-msgpacketizer INTERFACE
    arduino-compat
)
