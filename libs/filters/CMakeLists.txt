add_library(pac-filters INTERFACE)

target_sources(pac-filters INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Calculus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/Helper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Filters/Filters/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
)

target_include_directories(pac-filters INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Filters"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-filters INTERFACE
    arduino-compat
)
