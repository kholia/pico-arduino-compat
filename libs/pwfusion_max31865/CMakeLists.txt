add_library(pac-pwfusion_max31865 INTERFACE)

target_sources(pac-pwfusion_max31865 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWFusion_MAX31865/src/PwFusion_MAX31865.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWFusion_MAX31865/src/PwFusion_MAX31865.h"
)

target_include_directories(pac-pwfusion_max31865 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWFusion_MAX31865/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pwfusion_max31865 INTERFACE
    arduino-compat
)
