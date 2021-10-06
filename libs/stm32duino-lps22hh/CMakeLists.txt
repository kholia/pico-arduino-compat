add_library(stm32duino-lps22hh INTERFACE)

target_sources(stm32duino-lps22hh INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HH/src/LPS22HHSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HH/src/lps22hh_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HH/src/lps22hh_reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/LPS22HH/src/LPS22HHSensor.h"
)

target_include_directories(stm32duino-lps22hh INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LPS22HH/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-lps22hh INTERFACE
    arduino-compat
)
