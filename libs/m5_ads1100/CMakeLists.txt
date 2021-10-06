add_library(m5_ads1100 INTERFACE)

target_sources(m5_ads1100 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1100/src/M5_ADS1100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1100/src/M5_ADS1100.h"
)

target_include_directories(m5_ads1100 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5_ADS1100/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5_ads1100 INTERFACE
    arduino-compat
)
