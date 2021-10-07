add_library(pac-btle INTERFACE)

target_sources(pac-btle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BTLE/BTLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BTLE/BTLE.h"
)

target_include_directories(pac-btle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BTLE"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-btle INTERFACE
    arduino-compat
)
