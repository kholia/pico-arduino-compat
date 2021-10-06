add_library(lighteffect INTERFACE)

target_sources(lighteffect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LightEffect/src/LightEffect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LightEffect/src/LightEffect.h"
)

target_include_directories(lighteffect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LightEffect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lighteffect INTERFACE
    arduino-compat
)
