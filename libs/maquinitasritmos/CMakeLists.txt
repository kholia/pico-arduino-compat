add_library(maquinitasritmos INTERFACE)

target_sources(maquinitasritmos INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasRitmos/src/MaquinitasRitmos.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasRitmos/src/MaquinitasRitmos.h"
  "${CMAKE_CURRENT_LIST_DIR}/MaquinitasRitmos/src/200DrumMachinePatterns/rock1.h"
)

target_include_directories(maquinitasritmos INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MaquinitasRitmos/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(maquinitasritmos INTERFACE
    arduino-compat
)
