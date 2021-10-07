add_library(pac-sercomspislave INTERFACE)

target_sources(pac-sercomspislave INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SercomSPISlave/src/SercomSPISlave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SercomSPISlave/src/SercomSPISlave.h"
)

target_include_directories(pac-sercomspislave INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SercomSPISlave/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sercomspislave INTERFACE
    arduino-compat
)
