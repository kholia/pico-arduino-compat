add_library(pac-kerbal-sim-pit INTERFACE)

target_sources(pac-kerbal-sim-pit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/kerbalsimpit-arduino/src/KerbalSimpit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/kerbalsimpit-arduino/src/Helpers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/kerbalsimpit-arduino/src/PayloadStructs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/kerbalsimpit-arduino/src/PayloadStructs.h"
  "${CMAKE_CURRENT_LIST_DIR}/kerbalsimpit-arduino/src/KerbalSimpitMessageTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/kerbalsimpit-arduino/src/KerbalSimpit.h"
)

target_include_directories(pac-kerbal-sim-pit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/kerbalsimpit-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kerbal-sim-pit INTERFACE
    arduino-compat
)
