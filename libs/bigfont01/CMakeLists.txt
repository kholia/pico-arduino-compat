add_library(bigfont01 INTERFACE)

target_sources(bigfont01 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigFont01/BigFont01.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigFont01/BigFont01.h"
)

target_include_directories(bigfont01 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigFont01"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(bigfont01 INTERFACE
    arduino-compat
    official-liquid-crystal
)
