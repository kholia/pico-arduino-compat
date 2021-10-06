add_library(neurona INTERFACE)

target_sources(neurona INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Neurona/src/Neurona.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Neurona/src/arch/MLP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Neurona/src/Neurona.h"
  "${CMAKE_CURRENT_LIST_DIR}/Neurona/src/arch/MLP.h"
)

target_include_directories(neurona INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Neurona/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neurona INTERFACE
    arduino-compat
)
