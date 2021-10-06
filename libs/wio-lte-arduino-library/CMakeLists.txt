add_library(wio-lte-arduino-library INTERFACE)

target_sources(wio-lte-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/stm32f4_ws2812.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/gnss.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/wio_tracker.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/UART_Interface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/UART_Interface.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/board_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/wio_tracker.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/gnss.h"
  "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library/stm32f4_ws2812.h"
)

target_include_directories(wio-lte-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Wio_LTE_Arduino_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wio-lte-arduino-library INTERFACE
    arduino-compat
)
