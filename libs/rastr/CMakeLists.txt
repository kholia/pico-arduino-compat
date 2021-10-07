add_library(pac-rastr INTERFACE)

target_sources(pac-rastr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/Types.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/CanvasRGB565.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/CanvasMonochrome.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/CanvasRGB888.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/Util.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/StaticCanvas.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/Color.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/Canvas.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/DynamicCanvas.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr/CanvasGrayscale8.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/rastr.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr/Examples/SimpleTest/default_monospace_7.h"
)

target_include_directories(pac-rastr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-rastr"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rastr INTERFACE
    arduino-compat
)
