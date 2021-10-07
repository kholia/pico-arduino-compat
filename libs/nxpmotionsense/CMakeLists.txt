add_library(pac-nxpmotionsense INTERFACE)

target_sources(pac-nxpmotionsense INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NXPMotionSense/NXPMotionSense.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NXPMotionSense/SensorFusion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NXPMotionSense/matrix.c"
  "${CMAKE_CURRENT_LIST_DIR}/NXPMotionSense/NXPMotionSense.h"
  "${CMAKE_CURRENT_LIST_DIR}/NXPMotionSense/utility/NXPSensorRegisters.h"
)

target_include_directories(pac-nxpmotionsense INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NXPMotionSense"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nxpmotionsense INTERFACE
    arduino-compat
)
