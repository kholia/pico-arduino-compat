add_library(arxstringutils INTERFACE)

target_sources(arxstringutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/ArxStringUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
)

target_include_directories(arxstringutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArxStringUtils"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arxstringutils INTERFACE
    arduino-compat
)
