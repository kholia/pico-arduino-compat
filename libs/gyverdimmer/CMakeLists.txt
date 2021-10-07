add_library(pac-gyverdimmer INTERFACE)

target_sources(pac-gyverdimmer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverDimmer/src/GyverDimmer.h"
)

target_include_directories(pac-gyverdimmer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverDimmer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverdimmer INTERFACE
    arduino-compat
)
