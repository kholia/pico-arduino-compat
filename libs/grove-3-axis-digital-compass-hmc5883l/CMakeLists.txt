add_library(grove-3-axis-digital-compass-hmc5883l INTERFACE)

target_sources(grove-3-axis-digital-compass-hmc5883l INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_3Axis_Digital_Compass_HMC5883L/HMC5883L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_3Axis_Digital_Compass_HMC5883L/HMC5883L.h"
)

target_include_directories(grove-3-axis-digital-compass-hmc5883l INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_3Axis_Digital_Compass_HMC5883L"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(grove-3-axis-digital-compass-hmc5883l INTERFACE
    arduino-compat
)
