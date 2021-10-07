add_library(pac-tinympu6050 INTERFACE)

target_sources(pac-tinympu6050 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyMPU6050/src/TinyMPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMPU6050/examples/PlatformIO_Angles_Example/src/PlatformIO_Angles_Example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMPU6050/examples/PlatformIO_All_Gets_Example/src/PlatformIO_All_Gets_Example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyMPU6050/src/TinyMPU6050.h"
)

target_include_directories(pac-tinympu6050 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyMPU6050/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinympu6050 INTERFACE
    arduino-compat
)
