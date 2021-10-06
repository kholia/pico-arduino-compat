add_library(liblucesciudad INTERFACE)

target_sources(liblucesciudad INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LibLucesCiudad/src/LibLucesCiudad.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LibLucesCiudad/src/LibLucesCiudad.h"
)

target_include_directories(liblucesciudad INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LibLucesCiudad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(liblucesciudad INTERFACE
    arduino-compat
)
