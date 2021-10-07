add_library(pac-xlr8buildtemplate INTERFACE)

target_sources(pac-xlr8buildtemplate INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8BuildTemplate/src/XLR8Build.h"
)

target_include_directories(pac-xlr8buildtemplate INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8BuildTemplate/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8buildtemplate INTERFACE
    arduino-compat
)
