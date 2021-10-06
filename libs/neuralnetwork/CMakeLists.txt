add_library(neuralnetwork INTERFACE)

target_sources(neuralnetwork INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeuralNetworks/src/NeuralNetwork.h"
)

target_include_directories(neuralnetwork INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeuralNetworks/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neuralnetwork INTERFACE
    arduino-compat
)
