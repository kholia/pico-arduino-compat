add_library(pac-er_oledm1_ch1115 INTERFACE)

target_sources(pac-er_oledm1_ch1115 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ER_OLEDM1_CH1115/src/ER_OLEDM1_CH1115.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ER_OLEDM1_CH1115/src/ER_OLEDM1_CH1115_graphics.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ER_OLEDM1_CH1115/src/ER_OLEDM1_CH1115.h"
  "${CMAKE_CURRENT_LIST_DIR}/ER_OLEDM1_CH1115/src/ER_OLEDM1_CH1115_font.h"
  "${CMAKE_CURRENT_LIST_DIR}/ER_OLEDM1_CH1115/src/ER_OLEDM1_CH1115_graphics.h"
)

target_include_directories(pac-er_oledm1_ch1115 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ER_OLEDM1_CH1115/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-er_oledm1_ch1115 INTERFACE
    arduino-compat
)
