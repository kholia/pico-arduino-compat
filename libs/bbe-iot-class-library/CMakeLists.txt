add_library(pac-bbe-iot-class-library INTERFACE)

target_sources(pac-bbe-iot-class-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BBE-IoT-Class-Library/src/BBEClassLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BBE-IoT-Class-Library/src/BBEClassLibrary.h"
)

target_include_directories(pac-bbe-iot-class-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BBE-IoT-Class-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bbe-iot-class-library INTERFACE
    arduino-compat
)
