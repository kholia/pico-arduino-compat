add_library(pac-bno055 INTERFACE)

target_sources(pac-bno055 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BNO055/BNO055_support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BNO055/BNO055.c"
  "${CMAKE_CURRENT_LIST_DIR}/BNO055/BNO055.h"
  "${CMAKE_CURRENT_LIST_DIR}/BNO055/BNO055_support.h"
)

target_include_directories(pac-bno055 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BNO055"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bno055 INTERFACE
    arduino-compat
)
