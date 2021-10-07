add_library(pac-soldering-machine INTERFACE)

target_sources(pac-soldering-machine INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/SolderingMachine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/SolderingMachine.h"
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/examples/Big_Solder_Test/ErrorCodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/examples/Big_Solder_Test/menuOptions.h"
)

target_include_directories(pac-soldering-machine INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-soldering-machine INTERFACE
    arduino-compat
    pac-liquidcrystal
)
