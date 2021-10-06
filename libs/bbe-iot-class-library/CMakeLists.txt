add_library(bbe-iot-class-library INTERFACE)

target_sources(bbe-iot-class-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BBE-IoT-Class-Library/src/BBEClassLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BBE-IoT-Class-Library/src/BBEClassLibrary.h"
)

target_include_directories(bbe-iot-class-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BBE-IoT-Class-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bbe-iot-class-library INTERFACE
    arduino-compat
)
