add_library(icm20948_we INTERFACE)

target_sources(icm20948_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ICM20948_WE/src/ICM20948_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ICM20948_WE/src/ICM20948_WE.h"
)

target_include_directories(icm20948_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ICM20948_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(icm20948_we INTERFACE
    arduino-compat
)
