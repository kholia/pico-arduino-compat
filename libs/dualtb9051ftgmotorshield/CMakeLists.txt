add_library(pac-dualtb9051ftgmotorshield INTERFACE)

target_sources(pac-dualtb9051ftgmotorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dual-tb9051ftg-motor-shield/DualTB9051FTGMotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dual-tb9051ftg-motor-shield/DualTB9051FTGMotorShield.h"
)

target_include_directories(pac-dualtb9051ftgmotorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dual-tb9051ftg-motor-shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dualtb9051ftgmotorshield INTERFACE
    arduino-compat
)
