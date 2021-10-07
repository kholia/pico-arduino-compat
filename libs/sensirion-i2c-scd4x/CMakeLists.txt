add_library(pac-sensirion-i2c-scd4x INTERFACE)

target_sources(pac-sensirion-i2c-scd4x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-scd4x/src/SensirionI2CScd4x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-scd4x/src/SensirionI2CScd4x.h"
)

target_include_directories(pac-sensirion-i2c-scd4x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-scd4x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensirion-i2c-scd4x INTERFACE
    arduino-compat
)
