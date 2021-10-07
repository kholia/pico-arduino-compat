add_library(pac-neuralnetwork INTERFACE)

target_sources(pac-neuralnetwork INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NeuralNetworks/src/NeuralNetwork.h"
)

target_include_directories(pac-neuralnetwork INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NeuralNetworks/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-neuralnetwork INTERFACE
    arduino-compat
)
