add_library(protocentral-afe4490-ppg-and-spo2-boards-library INTERFACE)

target_sources(protocentral-afe4490-ppg-and-spo2-boards-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-afe4490-arduino/src/Protocentral_AFE4490_Oximeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/protocentral-afe4490-arduino/src/Protocentral_AFE4490_Oximeter.h"
)

target_include_directories(protocentral-afe4490-ppg-and-spo2-boards-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/protocentral-afe4490-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(protocentral-afe4490-ppg-and-spo2-boards-library INTERFACE
    arduino-compat
)
