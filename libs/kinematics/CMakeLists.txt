add_library(pac-kinematics INTERFACE)

target_sources(pac-kinematics INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Kinematics/src/Kinematics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kinematics/src/Kinematics.h"
)

target_include_directories(pac-kinematics INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Kinematics/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kinematics INTERFACE
    arduino-compat
)
