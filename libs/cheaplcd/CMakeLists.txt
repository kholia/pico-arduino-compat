add_library(cheaplcd INTERFACE)

target_sources(cheaplcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-CheapLCD/src/CheapLCD.h"
)

target_include_directories(cheaplcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-CheapLCD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(cheaplcd INTERFACE
    arduino-compat
    official-liquid-crystal
)
