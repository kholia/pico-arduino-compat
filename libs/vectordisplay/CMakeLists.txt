add_library(vectordisplay INTERFACE)

target_sources(vectordisplay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vectordisplayarduino/src/VectorDisplay.h"
)

target_include_directories(vectordisplay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vectordisplayarduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vectordisplay INTERFACE
    arduino-compat
)
