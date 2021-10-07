add_library(pac-lightdimmer INTERFACE)

target_sources(pac-lightdimmer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LightDimmer/src/LightDimmer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LightDimmer/src/LightDimmer.h"
)

target_include_directories(pac-lightdimmer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LightDimmer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lightdimmer INTERFACE
    arduino-compat
)
