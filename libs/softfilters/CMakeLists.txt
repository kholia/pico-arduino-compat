add_library(softfilters INTERFACE)

target_sources(softfilters INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftFilters/src/framework.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoftFilters/src/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoftFilters/src/SoftFilters.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoftFilters/src/LinkedList.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoftFilters/src/Tree.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoftFilters/src/OneEuro.h"
)

target_include_directories(softfilters INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftFilters/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(softfilters INTERFACE
    arduino-compat
)
