add_library(pac-protocentral-max30003-ecg-afe-sensor-library INTERFACE)

target_sources(pac-protocentral-max30003-ecg-afe-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_max30003/src/protocentral_Max30003.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_max30003/src/protocentral_Max30003.h"
)

target_include_directories(pac-protocentral-max30003-ecg-afe-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral_max30003/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-protocentral-max30003-ecg-afe-sensor-library INTERFACE
    arduino-compat
)
