add_library(pac-guarateca_obr INTERFACE)

target_sources(pac-guarateca_obr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_OBR/src/GuaraTeca_OBR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_OBR/src/GuaraTeca_OBR.h"
)

target_include_directories(pac-guarateca_obr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_OBR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-guarateca_obr INTERFACE
    arduino-compat
)
