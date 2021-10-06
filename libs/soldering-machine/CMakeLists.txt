add_library(soldering-machine INTERFACE)

target_sources(soldering-machine INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/SolderingMachine.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/SolderingMachine.h"
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/examples/Big_Solder_Test/ErrorCodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine/examples/Big_Solder_Test/menuOptions.h"
)

target_include_directories(soldering-machine INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Soldering-Machine"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(soldering-machine INTERFACE
    arduino-compat
    official-liquid-crystal
)
