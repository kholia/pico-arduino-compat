add_library(esp32-rmt-peripheral-van-bus-reader-library INTERFACE)

target_sources(esp32-rmt-peripheral-van-bus-reader-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_van_rx/src/esp32_arduino_rmt_van_rx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_van_rx/main/main.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_van_rx/src/esp32_rmt_van_rx.c"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_van_rx/src/esp32_arduino_rmt_van_rx.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_van_rx/src/esp32_rmt_van_rx.h"
)

target_include_directories(esp32-rmt-peripheral-van-bus-reader-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp32_rmt_van_rx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-rmt-peripheral-van-bus-reader-library INTERFACE
    arduino-compat
)
