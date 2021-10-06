add_library(sensirion-i2c-sen44 INTERFACE)

target_sources(sensirion-i2c-sen44 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-sen44/src/SensirionI2CSen44.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-sen44/src/SensirionI2CSen44.h"
)

target_include_directories(sensirion-i2c-sen44 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-i2c-sen44/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sensirion-i2c-sen44 INTERFACE
    arduino-compat
)
