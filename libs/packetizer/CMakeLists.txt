add_library(pac-packetizer INTERFACE)

target_sources(pac-packetizer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/examples/send_receive_other_apps/openFrameworks/send_receive_index/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/examples/send_receive_other_apps/openFrameworks/send_receive/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/Decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/Encoding.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/CRCx/CRCx.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRC_cpu.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRCsw.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRChw.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/CRCx/FastCRC/FastCRC_tables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Packetizer/Packetizer/util/CRCx/CRCpp/CRCpp.h"
)

target_include_directories(pac-packetizer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Packetizer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-packetizer INTERFACE
    arduino-compat
)
