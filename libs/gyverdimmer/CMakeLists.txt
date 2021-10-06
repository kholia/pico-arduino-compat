add_library(gyverdimmer INTERFACE)

target_sources(gyverdimmer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverDimmer/src/GyverDimmer.h"
)

target_include_directories(gyverdimmer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverDimmer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverdimmer INTERFACE
    arduino-compat
)
