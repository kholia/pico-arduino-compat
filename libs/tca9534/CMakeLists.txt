add_library(pac-tca9534 INTERFACE)

target_sources(pac-tca9534 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCA9534/TCA9534.h"
)

target_include_directories(pac-tca9534 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCA9534"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tca9534 INTERFACE
    arduino-compat
)
