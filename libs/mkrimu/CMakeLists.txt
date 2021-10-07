add_library(pac-mkrimu INTERFACE)

target_sources(pac-mkrimu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src/IMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src/IMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src/MKRIMU.h"
)

target_include_directories(pac-mkrimu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mkrimu INTERFACE
    arduino-compat
)
