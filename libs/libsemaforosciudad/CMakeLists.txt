add_library(pac-libsemaforosciudad INTERFACE)

target_sources(pac-libsemaforosciudad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibSemaforosCiudad/src/LibSemaforosCiudad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibSemaforosCiudad/src/LibSemaforosCiudad.h"
)

target_include_directories(pac-libsemaforosciudad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibSemaforosCiudad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-libsemaforosciudad INTERFACE
    arduino-compat
)
