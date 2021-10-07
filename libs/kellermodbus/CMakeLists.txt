add_library(pac-kellermodbus INTERFACE)

target_sources(pac-kellermodbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KellerModbus/src/KellerModbus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KellerModbus/src/KellerModbus.h"
)

target_include_directories(pac-kellermodbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KellerModbus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kellermodbus INTERFACE
    arduino-compat
)
