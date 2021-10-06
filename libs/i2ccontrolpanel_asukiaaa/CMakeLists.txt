add_library(i2ccontrolpanel_asukiaaa INTERFACE)

target_sources(i2ccontrolpanel_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/I2cControlPanel_asukiaaa/src/I2cControlPanel_asukiaaa_template.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2cControlPanel_asukiaaa/src/I2cControlPanel_asukiaaa.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/I2cControlPanel_asukiaaa/src/I2cControlPanel_asukiaaa.h"
)

target_include_directories(i2ccontrolpanel_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/I2cControlPanel_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(i2ccontrolpanel_asukiaaa INTERFACE
    arduino-compat
)
