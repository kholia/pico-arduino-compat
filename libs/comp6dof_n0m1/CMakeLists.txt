add_library(pac-comp6dof_n0m1 INTERFACE)

target_sources(pac-comp6dof_n0m1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Comp6DOF_n0m1/Comp6DOF_n0m1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Comp6DOF_n0m1/Comp6DOF_n0m1.h"
)

target_include_directories(pac-comp6dof_n0m1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Comp6DOF_n0m1"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-comp6dof_n0m1 INTERFACE
    arduino-compat
)
