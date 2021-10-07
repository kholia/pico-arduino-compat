add_library(pac-arduino_bq24195 INTERFACE)

target_sources(pac-arduino_bq24195 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_BQ24195/src/BQ24195.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_BQ24195/src/BQ24195.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_BQ24195/src/Arduino_PMIC.h"
)

target_include_directories(pac-arduino_bq24195 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_BQ24195/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_bq24195 INTERFACE
    arduino-compat
)
