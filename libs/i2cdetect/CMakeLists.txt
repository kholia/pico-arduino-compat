add_library(pac-i2cdetect INTERFACE)

target_sources(pac-i2cdetect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/i2cdetect/i2cdetect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/i2cdetect/i2cdetect.h"
)

target_include_directories(pac-i2cdetect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/i2cdetect"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2cdetect INTERFACE
    arduino-compat
)
