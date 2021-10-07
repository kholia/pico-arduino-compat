add_library(pac-protocentral-ads1262-32-bit-precision-adc-library INTERFACE)

target_sources(pac-protocentral-ads1262-32-bit-precision-adc-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ProtoCentral_ads1262/src/ads1262.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ProtoCentral_ads1262/src/ads1262.h"
)

target_include_directories(pac-protocentral-ads1262-32-bit-precision-adc-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ProtoCentral_ads1262/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-protocentral-ads1262-32-bit-precision-adc-library INTERFACE
    arduino-compat
)
