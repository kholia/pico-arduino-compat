add_library(pac-arxsmartptr INTERFACE)

target_sources(pac-arxsmartptr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArxSmartPtr/ArxSmartPtr.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxSmartPtr/ArxSmartPtr/shared_ptr.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxSmartPtr/ArxSmartPtr/detail/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxSmartPtr/ArxSmartPtr/detail/shared_count.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxSmartPtr/ArxSmartPtr/detail/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxSmartPtr/ArxSmartPtr/detail/has_libstdcplusplus.h"
)

target_include_directories(pac-arxsmartptr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArxSmartPtr"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arxsmartptr INTERFACE
    arduino-compat
)
