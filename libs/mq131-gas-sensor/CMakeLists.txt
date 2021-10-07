add_library(pac-mq131-gas-sensor INTERFACE)

target_sources(pac-mq131-gas-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MQ131-driver/src/MQ131.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-MQ131-driver/src/MQ131.h"
)

target_include_directories(pac-mq131-gas-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-MQ131-driver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mq131-gas-sensor INTERFACE
    arduino-compat
)
