add_library(pac-protocentral-max86150-ppg-and-ecg-ic-library INTERFACE)

target_sources(pac-protocentral-max86150-ppg-and-ecg-ic-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_max86150_ecg_ppg/src/max86150.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral_max86150_ecg_ppg/src/max86150.h"
)

target_include_directories(pac-protocentral-max86150-ppg-and-ecg-ic-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral_max86150_ecg_ppg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-protocentral-max86150-ppg-and-ecg-ic-library INTERFACE
    arduino-compat
)
