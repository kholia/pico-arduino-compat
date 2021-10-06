add_library(libsemaforosciudad INTERFACE)

target_sources(libsemaforosciudad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibSemaforosCiudad/src/LibSemaforosCiudad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibSemaforosCiudad/src/LibSemaforosCiudad.h"
)

target_include_directories(libsemaforosciudad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibSemaforosCiudad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(libsemaforosciudad INTERFACE
    arduino-compat
)
