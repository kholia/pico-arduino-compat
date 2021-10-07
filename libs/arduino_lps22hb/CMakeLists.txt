add_library(pac-arduino_lps22hb INTERFACE)

target_sources(pac-arduino_lps22hb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LPS22HB/src/BARO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LPS22HB/src/Arduino_LPS22HB.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_LPS22HB/src/BARO.h"
)

target_include_directories(pac-arduino_lps22hb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_LPS22HB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_lps22hb INTERFACE
    arduino-compat
)
