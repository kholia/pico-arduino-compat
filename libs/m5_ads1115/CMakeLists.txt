add_library(m5_ads1115 INTERFACE)

target_sources(m5_ads1115 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1115/src/voltmeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1115/src/M5_ADS1115.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1115/src/M5_ADS1115.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1115/src/voltmeter.h"
)

target_include_directories(m5_ads1115 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1115/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5_ads1115 INTERFACE
    arduino-compat
)
