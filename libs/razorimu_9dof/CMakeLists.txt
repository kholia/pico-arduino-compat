add_library(pac-razorimu_9dof INTERFACE)

target_sources(pac-razorimu_9dof INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RazorIMU_9DOF/src/RazorIMU_9DOF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RazorIMU_9DOF/src/RazorIMU_9DOF.h"
)

target_include_directories(pac-razorimu_9dof INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RazorIMU_9DOF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-razorimu_9dof INTERFACE
    arduino-compat
)
