add_library(pac-bignums2x2 INTERFACE)

target_sources(pac-bignums2x2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BigNums2x2/src/BigNums2x2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BigNums2x2/src/BigNums2x2.h"
)

target_include_directories(pac-bignums2x2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BigNums2x2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-bignums2x2 INTERFACE
    arduino-compat
    pac-liquidcrystal
)
