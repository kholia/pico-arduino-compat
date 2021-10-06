add_library(guarateca_obr INTERFACE)

target_sources(guarateca_obr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_OBR/src/GuaraTeca_OBR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_OBR/src/GuaraTeca_OBR.h"
)

target_include_directories(guarateca_obr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_OBR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(guarateca_obr INTERFACE
    arduino-compat
)
