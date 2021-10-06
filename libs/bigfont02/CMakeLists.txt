add_library(bigfont02 INTERFACE)

target_sources(bigfont02 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigFont02/BigFont02.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigFont02/BigFont02.h"
)

target_include_directories(bigfont02 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigFont02"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(bigfont02 INTERFACE
    arduino-compat
    official-liquid-crystal
)
