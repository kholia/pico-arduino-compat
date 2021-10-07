add_library(pac-debouncer INTERFACE)

target_sources(pac-debouncer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/DebouncerImpl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits/tuple.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxTypeTraits/ArxTypeTraits/has_libstdcplusplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/TeensyDirtySTLErrorSolution/TeensyDirtySTLErrorSolution.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Debouncer/Debouncer/util/ArxContainer/ArxContainer/has_libstdcplusplus.h"
)

target_include_directories(pac-debouncer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Debouncer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-debouncer INTERFACE
    arduino-compat
)
