add_library(pac-maquinitasparams INTERFACE)

target_sources(pac-maquinitasparams INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasParams/src/MaquinitasParams.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasParams/src/roland/RolandTR09.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasParams/src/korg/KorgVolcaKeys.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasParams/src/korg/KorgVolcaBass.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasParams/src/korg/KorgVolcaBeats.h"
)

target_include_directories(pac-maquinitasparams INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MaquinitasParams/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-maquinitasparams INTERFACE
    arduino-compat
)
