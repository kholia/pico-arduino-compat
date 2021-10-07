add_library(pac-l298n_motordriver INTERFACE)

target_sources(pac-l298n_motordriver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/L298N_MotorDriver/src/L298N_MotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/L298N_MotorDriver/src/L298N_MotorDriver.h"
)

target_include_directories(pac-l298n_motordriver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/L298N_MotorDriver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-l298n_motordriver INTERFACE
    arduino-compat
)
