add_library(arxcontainer INTERFACE)

target_sources(arxcontainer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArxContainer/ArxContainer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxContainer/ArxContainer/has_include.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxContainer/ArxContainer/initializer_list.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxContainer/ArxContainer/replace_minmax_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArxContainer/ArxContainer/has_libstdcplusplus.h"
)

target_include_directories(arxcontainer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArxContainer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arxcontainer INTERFACE
    arduino-compat
)
