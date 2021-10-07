add_library(pac-functor INTERFACE)

target_sources(pac-functor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Functor/examples/LedController/Constants.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Functor/examples/LedController/LedController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Functor/examples/LedController/Method.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Functor/src/Functor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Functor/examples/LedController/LedController.h"
  "${CMAKE_CURRENT_LIST_DIR}/Functor/examples/LedController/Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/Functor/examples/LedController/Method.h"
)

target_include_directories(pac-functor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Functor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-functor INTERFACE
    arduino-compat
)
