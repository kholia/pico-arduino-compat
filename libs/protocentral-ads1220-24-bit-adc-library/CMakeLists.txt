add_library(protocentral-ads1220-24-bit-adc-library INTERFACE)

target_sources(protocentral-ads1220-24-bit-adc-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Protocentral_ADS1220/src/Protocentral_ADS1220.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Protocentral_ADS1220/src/Protocentral_ADS1220.h"
)

target_include_directories(protocentral-ads1220-24-bit-adc-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Protocentral_ADS1220/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(protocentral-ads1220-24-bit-adc-library INTERFACE
    arduino-compat
)
