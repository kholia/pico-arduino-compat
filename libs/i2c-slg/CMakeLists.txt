add_library(i2c-slg INTERFACE)

target_sources(i2c-slg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2C_SLG/src/I2C_SLG46826_REG.h"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_SLG/src/I2C_SLG46826.h"
  "${CMAKE_CURRENT_LIST_DIR}/I2C_SLG/examples/WebSLG/html.h"
)

target_include_directories(i2c-slg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2C_SLG/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2c-slg INTERFACE
    arduino-compat
)
