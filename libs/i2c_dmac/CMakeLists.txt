add_library(pac-i2c_dmac INTERFACE)

target_sources(pac-i2c_dmac INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_DMAC/I2C_DMAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_DMAC/DMAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_DMAC/I2C_DMAC.h"
)

target_include_directories(pac-i2c_dmac INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_DMAC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2c_dmac INTERFACE
    arduino-compat
)
