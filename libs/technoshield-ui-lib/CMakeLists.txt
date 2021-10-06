add_library(technoshield-ui-lib INTERFACE)

target_sources(technoshield-ui-lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/technoshield-ui-lib/Technoshield_ui.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/technoshield-ui-lib/utility/Adafruit_LiquidCrystal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/technoshield-ui-lib/utility/Adafruit_MCP23008.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/technoshield-ui-lib/Technoshield_ui.h"
  "${CMAKE_CURRENT_LIST_DIR}/technoshield-ui-lib/utility/Adafruit_MCP23008.h"
  "${CMAKE_CURRENT_LIST_DIR}/technoshield-ui-lib/utility/Adafruit_LiquidCrystal.h"
)

target_include_directories(technoshield-ui-lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/technoshield-ui-lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(technoshield-ui-lib INTERFACE
    arduino-compat
)
