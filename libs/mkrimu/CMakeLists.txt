add_library(mkrimu INTERFACE)

target_sources(mkrimu INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src/IMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src/IMU.h"
  "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src/MKRIMU.h"
)

target_include_directories(mkrimu INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MKRIMU/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mkrimu INTERFACE
    arduino-compat
)
