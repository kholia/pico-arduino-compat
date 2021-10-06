add_library(xlr8buildtemplate INTERFACE)

target_sources(xlr8buildtemplate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8BuildTemplate/src/XLR8Build.h"
)

target_include_directories(xlr8buildtemplate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8BuildTemplate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8buildtemplate INTERFACE
    arduino-compat
)
