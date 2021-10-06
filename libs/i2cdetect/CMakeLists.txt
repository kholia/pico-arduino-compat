add_library(i2cdetect INTERFACE)

target_sources(i2cdetect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/i2cdetect/i2cdetect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/i2cdetect/i2cdetect.h"
)

target_include_directories(i2cdetect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/i2cdetect"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2cdetect INTERFACE
    arduino-compat
)
