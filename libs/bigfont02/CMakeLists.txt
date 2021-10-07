add_library(pac-bigfont02 INTERFACE)

target_sources(pac-bigfont02 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigFont02/BigFont02.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigFont02/BigFont02.h"
)

target_include_directories(pac-bigfont02 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigFont02"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-bigfont02 INTERFACE
    arduino-compat
    pac-liquidcrystal
)
