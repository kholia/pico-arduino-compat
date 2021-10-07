add_library(pac-guarateca_hardware INTERFACE)

target_sources(pac-guarateca_hardware INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_Hardware/src/GuaraTeca_CI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_Hardware/src/GuaraTeca_Atuadores.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_Hardware/src/GuaraTeca_Sensores.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_Hardware/src/GuaraTeca_Motores.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_Hardware/src/GuaraTeca.h"
  "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_Hardware/src/GuaraTeca_Hardware.h"
)

target_include_directories(pac-guarateca_hardware INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GuaraTeca_Hardware/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-guarateca_hardware INTERFACE
    arduino-compat
)
