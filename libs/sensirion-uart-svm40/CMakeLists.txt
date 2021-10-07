add_library(pac-sensirion-uart-svm40 INTERFACE)

target_sources(pac-sensirion-uart-svm40 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-svm40/src/SensirionUartSvm40.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-svm40/src/SensirionUartSvm40.h"
)

target_include_directories(pac-sensirion-uart-svm40 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-svm40/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensirion-uart-svm40 INTERFACE
    arduino-compat
)
