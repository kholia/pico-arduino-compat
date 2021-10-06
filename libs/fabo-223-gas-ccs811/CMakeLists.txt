add_library(fabo-223-gas-ccs811 INTERFACE)

target_sources(fabo-223-gas-ccs811 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoGas-CCS811-Library/src/FaBoGas_CCS811.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoGas-CCS811-Library/src/FaBoGas_CCS811.h"
)

target_include_directories(fabo-223-gas-ccs811 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoGas-CCS811-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fabo-223-gas-ccs811 INTERFACE
    arduino-compat
)
