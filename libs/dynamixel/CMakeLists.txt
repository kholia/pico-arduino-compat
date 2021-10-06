add_library(dynamixel INTERFACE)

target_sources(dynamixel INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/Dynamixel.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/DynamixelControlTable.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/group_bulk_read.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/packet_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/group_sync_write.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/protocol1_packet_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/protocol2_packet_handler.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/dynamixel_sdk.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/port_handler_arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/group_sync_read.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/lib/DynamixelSDK/include/group_bulk_write.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Dynamixel/Dynamixel/util/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
)

target_include_directories(dynamixel INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dynamixel"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dynamixel INTERFACE
    arduino-compat
)
