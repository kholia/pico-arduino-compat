add_library(quadratureencoder INTERFACE)

target_sources(quadratureencoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QuadratureEncoder/QuadratureEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QuadratureEncoder/QuadratureEncoder.h"
)

target_include_directories(quadratureencoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QuadratureEncoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(quadratureencoder INTERFACE
    arduino-compat
)
