add_library(pac-lcdeffects INTERFACE)

target_sources(pac-lcdeffects INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src/LcdEffects.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src/Effects.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src/Cache.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src/Cache.h"
  "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src/LcdEffects.h"
  "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src/Effects.h"
  "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src/rom0.h"
)

target_include_directories(pac-lcdeffects INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LcdEffects/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lcdeffects INTERFACE
    arduino-compat
)
