add_library(pac-icm20948_we INTERFACE)

target_sources(pac-icm20948_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ICM20948_WE/src/ICM20948_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ICM20948_WE/src/ICM20948_WE.h"
)

target_include_directories(pac-icm20948_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ICM20948_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-icm20948_we INTERFACE
    arduino-compat
)
