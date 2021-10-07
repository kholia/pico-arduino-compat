add_library(pac-melopero-ubx-protocol INTERFACE)

target_sources(pac-melopero-ubx-protocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_UBX/src/Melopero_UBX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_UBX/src/Melopero_UBX.h"
)

target_include_directories(pac-melopero-ubx-protocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_UBX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-melopero-ubx-protocol INTERFACE
    arduino-compat
)
