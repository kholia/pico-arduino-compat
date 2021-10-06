add_library(hamshield_kiss INTERFACE)

target_sources(hamshield_kiss INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HamShield_KISS/src/KISS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HamShield_KISS/src/packet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HamShield_KISS/src/SimpleFIFO.h"
  "${CMAKE_CURRENT_LIST_DIR}/HamShield_KISS/src/packet.h"
  "${CMAKE_CURRENT_LIST_DIR}/HamShield_KISS/src/KISS.h"
)

target_include_directories(hamshield_kiss INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HamShield_KISS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hamshield_kiss INTERFACE
    arduino-compat
)
