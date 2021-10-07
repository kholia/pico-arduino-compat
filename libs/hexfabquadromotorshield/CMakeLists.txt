add_library(pac-hexfabquadromotorshield INTERFACE)

target_sources(pac-hexfabquadromotorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HexFabQuadroMotorShield/src/DCMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HexFabQuadroMotorShield/src/HexFabQuadroMotorShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/HexFabQuadroMotorShield/src/DCMotor.h"
)

target_include_directories(pac-hexfabquadromotorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HexFabQuadroMotorShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hexfabquadromotorshield INTERFACE
    arduino-compat
)
