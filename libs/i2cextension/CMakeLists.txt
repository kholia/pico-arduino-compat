add_library(i2cextension INTERFACE)

target_sources(i2cextension INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2CExtension/I2CExtension.h"
)

target_include_directories(i2cextension INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2CExtension"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2cextension INTERFACE
    arduino-compat
)
