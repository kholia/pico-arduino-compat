add_library(pac-honeywell-zephyr-i2c INTERFACE)

target_sources(pac-honeywell-zephyr-i2c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HoneywellZephyrI2C/src/HoneywellZephyrI2C.h"
)

target_include_directories(pac-honeywell-zephyr-i2c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HoneywellZephyrI2C/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-honeywell-zephyr-i2c INTERFACE
    arduino-compat
)
