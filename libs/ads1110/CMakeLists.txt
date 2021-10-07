add_library(pac-ads1110 INTERFACE)

target_sources(pac-ads1110 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADS1110/ADS1110.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1110/utility/ADS1110_PString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1110/ADS1110.h"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1110/utility/ADS1110InfoStr.h"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1110/utility/ADS1110_PString.h"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1110/utility/ADS1110ComStr.h"
)

target_include_directories(pac-ads1110 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADS1110"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ads1110 INTERFACE
    arduino-compat
)
