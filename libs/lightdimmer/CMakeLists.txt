add_library(lightdimmer INTERFACE)

target_sources(lightdimmer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LightDimmer/src/LightDimmer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LightDimmer/src/LightDimmer.h"
)

target_include_directories(lightdimmer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LightDimmer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lightdimmer INTERFACE
    arduino-compat
)
