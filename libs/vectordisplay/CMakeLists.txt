add_library(pac-vectordisplay INTERFACE)

target_sources(pac-vectordisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vectordisplayarduino/src/VectorDisplay.h"
)

target_include_directories(pac-vectordisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vectordisplayarduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vectordisplay INTERFACE
    arduino-compat
)
