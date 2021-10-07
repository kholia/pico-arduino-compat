add_library(pac-multifunctionshield INTERFACE)

target_sources(pac-multifunctionshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MultiFunctionShield/src/MultiFunctionShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MultiFunctionShield/src/MultiFunctionShield.h"
)

target_include_directories(pac-multifunctionshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MultiFunctionShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-multifunctionshield INTERFACE
    arduino-compat
)
