add_library(pac-sensirion-i2c-svm40 INTERFACE)

target_sources(pac-sensirion-i2c-svm40 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-svm40/src/SensirionI2CSvm40.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-svm40/src/SensirionI2CSvm40.h"
)

target_include_directories(pac-sensirion-i2c-svm40 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-svm40/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensirion-i2c-svm40 INTERFACE
    arduino-compat
)
