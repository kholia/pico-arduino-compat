add_library(pac-meanfilterlib INTERFACE)

target_sources(pac-meanfilterlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Meanfilter/src/MeanFilterLib.h"
)

target_include_directories(pac-meanfilterlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Meanfilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-meanfilterlib INTERFACE
    arduino-compat
)
