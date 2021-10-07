add_library(pac-lighteffect INTERFACE)

target_sources(pac-lighteffect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LightEffect/src/LightEffect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LightEffect/src/LightEffect.h"
)

target_include_directories(pac-lighteffect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LightEffect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lighteffect INTERFACE
    arduino-compat
)
