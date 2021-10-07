add_library(pac-frequencytimer2 INTERFACE)

target_sources(pac-frequencytimer2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FrequencyTimer2/FrequencyTimer2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FrequencyTimer2/FrequencyTimer2.h"
)

target_include_directories(pac-frequencytimer2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FrequencyTimer2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-frequencytimer2 INTERFACE
    arduino-compat
)
