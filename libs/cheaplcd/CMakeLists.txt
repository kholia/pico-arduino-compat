add_library(pac-cheaplcd INTERFACE)

target_sources(pac-cheaplcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CheapLCD/src/CheapLCD.h"
)

target_include_directories(pac-cheaplcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-CheapLCD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-cheaplcd INTERFACE
    arduino-compat
    pac-liquidcrystal
)
