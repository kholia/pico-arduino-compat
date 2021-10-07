add_library(pac-yaaws INTERFACE)

target_sources(pac-yaaws INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YAAWS/src/YAAWS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YAAWS/src/YAAWS.h"
)

target_include_directories(pac-yaaws INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YAAWS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yaaws INTERFACE
    arduino-compat
)
