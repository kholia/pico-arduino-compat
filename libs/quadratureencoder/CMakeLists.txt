add_library(pac-quadratureencoder INTERFACE)

target_sources(pac-quadratureencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QuadratureEncoder/QuadratureEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QuadratureEncoder/QuadratureEncoder.h"
)

target_include_directories(pac-quadratureencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QuadratureEncoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-quadratureencoder INTERFACE
    arduino-compat
)
