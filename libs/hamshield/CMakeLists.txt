add_library(pac-hamshield INTERFACE)

target_sources(pac-hamshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HamShield/src/HamShield_comms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HamShield/src/HamShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HamShield/src/HamShield_comms.h"
  "${CMAKE_CURRENT_LIST_DIR}/HamShield/src/HamShield.h"
)

target_include_directories(pac-hamshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HamShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hamshield INTERFACE
    arduino-compat
)
