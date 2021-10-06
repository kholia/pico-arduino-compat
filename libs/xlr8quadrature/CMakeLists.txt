add_library(xlr8quadrature INTERFACE)

target_sources(xlr8quadrature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Quadrature/src/XLR8Quadrature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Quadrature/src/XLR8Quadrature.h"
)

target_include_directories(xlr8quadrature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Quadrature/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8quadrature INTERFACE
    arduino-compat
)
