add_library(pac-bigfont01 INTERFACE)

target_sources(pac-bigfont01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigFont01/BigFont01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigFont01/BigFont01.h"
)

target_include_directories(pac-bigfont01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigFont01"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-bigfont01 INTERFACE
    arduino-compat
    pac-liquidcrystal
)
