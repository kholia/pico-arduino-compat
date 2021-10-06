add_library(bigcrystal INTERFACE)

target_sources(bigcrystal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigFont.c"
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigFont.h"
  "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src/BigCrystal.h"
)

target_include_directories(bigcrystal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigCrystal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(bigcrystal INTERFACE
    arduino-compat
    official-liquid-crystal
)
