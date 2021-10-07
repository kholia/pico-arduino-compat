add_library(pac-lis331 INTERFACE)

target_sources(pac-lis331 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LIS331/src/LIS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIS331/src/LIS331HH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIS331/src/LIS3DH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LIS331/src/LIS.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIS331/src/LIS331HH.h"
  "${CMAKE_CURRENT_LIST_DIR}/LIS331/src/LIS3DH.h"
)

target_include_directories(pac-lis331 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LIS331/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lis331 INTERFACE
    arduino-compat
)
