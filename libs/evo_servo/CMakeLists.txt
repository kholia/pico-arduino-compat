add_library(pac-evo_servo INTERFACE)

target_sources(pac-evo_servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/evo_servo/src/evo_servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/evo_servo/src/evo_servo.h"
)

target_include_directories(pac-evo_servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/evo_servo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-evo_servo INTERFACE
    arduino-compat
)
