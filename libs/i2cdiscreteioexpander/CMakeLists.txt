add_library(i2cdiscreteioexpander INTERFACE)

target_sources(i2cdiscreteioexpander INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2cDiscreteIoExpander/src/I2cDiscreteIoExpander.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2cDiscreteIoExpander/src/I2cDiscreteIoExpander.h"
)

target_include_directories(i2cdiscreteioexpander INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2cDiscreteIoExpander/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2cdiscreteioexpander INTERFACE
    arduino-compat
)
