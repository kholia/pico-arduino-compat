add_library(basiclinearalgebra INTERFACE)

target_sources(basiclinearalgebra INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/test/test_linear_algebra.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/test/test_arithmetic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/test/test_examples.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/ElementStorage.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/BasicLinearAlgebra.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/test/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/impl/NotSoBasicLinearAlgebra.h"
  "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra/impl/BasicLinearAlgebra.h"
)

target_include_directories(basiclinearalgebra INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BasicLinearAlgebra"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(basiclinearalgebra INTERFACE
    arduino-compat
)
