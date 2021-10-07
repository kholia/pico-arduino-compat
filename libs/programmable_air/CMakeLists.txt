add_library(pac-programmable_air INTERFACE)

target_sources(pac-programmable_air INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Code/src/programmable_air.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Code/src/programmable_air.h"
  "${CMAKE_CURRENT_LIST_DIR}/Code/examples/factoryFirmware/EEPROMAnything.h"
)

target_include_directories(pac-programmable_air INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Code/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-programmable_air INTERFACE
    arduino-compat
)
