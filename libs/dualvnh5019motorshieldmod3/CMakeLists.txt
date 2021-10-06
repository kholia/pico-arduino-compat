add_library(dualvnh5019motorshieldmod3 INTERFACE)

target_sources(dualvnh5019motorshieldmod3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DualVNH5019MotorShieldMod3/DualVNH5019MotorShieldMod3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DualVNH5019MotorShieldMod3/DualVNH5019MotorShieldMod3.h"
)

target_include_directories(dualvnh5019motorshieldmod3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DualVNH5019MotorShieldMod3"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dualvnh5019motorshieldmod3 INTERFACE
    arduino-compat
)
