add_library(nexgenmotorshield INTERFACE)

target_sources(nexgenmotorshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nexgen_motorshield/src/NexgenMotorShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nexgen_motorshield/src/NexgenMotorShield.h"
)

target_include_directories(nexgenmotorshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nexgen_motorshield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nexgenmotorshield INTERFACE
    arduino-compat
)
