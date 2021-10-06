add_library(melopero-ubx-protocol INTERFACE)

target_sources(melopero-ubx-protocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_UBX/src/Melopero_UBX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_UBX/src/Melopero_UBX.h"
)

target_include_directories(melopero-ubx-protocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_UBX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(melopero-ubx-protocol INTERFACE
    arduino-compat
)
