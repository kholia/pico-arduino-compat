add_library(i2c-irsense-library INTERFACE)

target_sources(i2c-irsense-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-irsense/src/IRSense.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-irsense/src/IRSense.h"
)

target_include_directories(i2c-irsense-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-irsense/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c-irsense-library INTERFACE
    arduino-compat
)
