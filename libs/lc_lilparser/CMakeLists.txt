add_library(pac-lc_lilparser INTERFACE)

target_sources(pac-lc_lilparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LC_lilParser/src/lilParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LC_lilParser/src/lilParser.h"
)

target_include_directories(pac-lc_lilparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LC_lilParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lc_lilparser INTERFACE
    arduino-compat
)
