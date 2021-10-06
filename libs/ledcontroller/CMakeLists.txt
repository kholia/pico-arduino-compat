add_library(ledcontroller INTERFACE)

target_sources(ledcontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/Move.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/transformation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/implementations/LedController_MAX72XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/common.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/Move.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/config.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/transformation.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/test/common/display.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/LedController.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/LedController_MAX72XX.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/LedController_byterow.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/LedController_config.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/LedController_byteblock.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/LedController_template.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/LedController_charTable.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/implementations/LedController_movement.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/implementations/LedController_display.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/implementations/LedController_low_level.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/implementations/LedController_core.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedController/src/implementations/LedController_transformation.hpp"
)

target_include_directories(ledcontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LedController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ledcontroller INTERFACE
    arduino-compat
)
