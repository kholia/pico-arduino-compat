add_library(pac-bigcrystal INTERFACE)

target_sources(pac-bigcrystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigFont.c"
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigCrystal.h"
)

target_include_directories(pac-bigcrystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-bigcrystal INTERFACE
    arduino-compat
    pac-liquidcrystal
)
