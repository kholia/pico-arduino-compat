add_library(protocentral-ads1292r-ecg-and-respiration-boards-library INTERFACE)

target_sources(protocentral-ads1292r-ecg-and-respiration-boards-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1292r-arduino/src/protocentralAds1292r.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1292r-arduino/src/ecgRespirationAlgo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1292r-arduino/src/ecgRespirationAlgo.h"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1292r-arduino/src/protocentralAds1292r.h"
)

target_include_directories(protocentral-ads1292r-ecg-and-respiration-boards-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral-ads1292r-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(protocentral-ads1292r-ecg-and-respiration-boards-library INTERFACE
    arduino-compat
)
