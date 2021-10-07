add_library(pac-arduino_knn INTERFACE)

target_sources(pac-arduino_knn INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_KNN/src/KNNClassifier.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_KNN/src/utility/KNNNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_KNN/src/KNNClassifier.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_KNN/src/Arduino_KNN.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_KNN/src/utility/KNNNode.h"
)

target_include_directories(pac-arduino_knn INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_KNN/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_knn INTERFACE
    arduino-compat
)
