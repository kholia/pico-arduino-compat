add_library(pac-stm32duino-lps22hb INTERFACE)

target_sources(pac-stm32duino-lps22hb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HB/src/LPS22HBSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HB/src/LPS22HB_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HB/src/LPS22HBSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HB/src/LPS22HB_Driver.h"
)

target_include_directories(pac-stm32duino-lps22hb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LPS22HB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-lps22hb INTERFACE
    arduino-compat
)
