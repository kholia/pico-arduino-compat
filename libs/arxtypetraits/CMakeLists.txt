add_library(pac-arxtypetraits INTERFACE)

target_sources(pac-arxtypetraits INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
)

target_include_directories(pac-arxtypetraits INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArxTypeTraits"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arxtypetraits INTERFACE
    arduino-compat
)
