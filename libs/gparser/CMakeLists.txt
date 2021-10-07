add_library(pac-gparser INTERFACE)

target_sources(pac-gparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GParser/src/GParser.h"
)

target_include_directories(pac-gparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gparser INTERFACE
    arduino-compat
)
