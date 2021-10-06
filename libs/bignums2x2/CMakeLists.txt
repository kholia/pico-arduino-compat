add_library(bignums2x2 INTERFACE)

target_sources(bignums2x2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigNums2x2/src/BigNums2x2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigNums2x2/src/BigNums2x2.h"
)

target_include_directories(bignums2x2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigNums2x2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(bignums2x2 INTERFACE
    arduino-compat
    official-liquid-crystal
)
