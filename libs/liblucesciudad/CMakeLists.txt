add_library(pac-liblucesciudad INTERFACE)

target_sources(pac-liblucesciudad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibLucesCiudad/src/LibLucesCiudad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibLucesCiudad/src/LibLucesCiudad.h"
)

target_include_directories(pac-liblucesciudad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibLucesCiudad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-liblucesciudad INTERFACE
    arduino-compat
)
