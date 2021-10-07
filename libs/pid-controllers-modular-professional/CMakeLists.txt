add_library(pac-pid-controllers-modular-professional INTERFACE)

target_sources(pac-pid-controllers-modular-professional INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/CPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/ConFunct.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/IPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/SPID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/CPID.h"
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/IPID.h"
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/ConFunct.h"
  "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src/SPID.h"
)

target_include_directories(pac-pid-controllers-modular-professional INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PIDcontrollersModularProfessional/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pid-controllers-modular-professional INTERFACE
    arduino-compat
)
