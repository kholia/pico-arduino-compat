add_library(bmp388_dev INTERFACE)

target_sources(bmp388_dev INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BMP388_DEV/BMP388_DEV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMP388_DEV/Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BMP388_DEV/BMP388_DEV.h"
  "${CMAKE_CURRENT_LIST_DIR}/BMP388_DEV/Device.h"
)

target_include_directories(bmp388_dev INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BMP388_DEV"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bmp388_dev INTERFACE
    arduino-compat
)
