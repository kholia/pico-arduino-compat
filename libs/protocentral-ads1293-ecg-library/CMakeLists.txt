add_library(protocentral-ads1293-ecg-library INTERFACE)

target_sources(protocentral-ads1293-ecg-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1293-arduino/src/protocentral_ads1293.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1293-arduino/src/protocentral_ads1293.h"
)

target_include_directories(protocentral-ads1293-ecg-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1293-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(protocentral-ads1293-ecg-library INTERFACE
    arduino-compat
)
