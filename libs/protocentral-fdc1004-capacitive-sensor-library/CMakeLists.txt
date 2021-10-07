add_library(pac-protocentral-fdc1004-capacitive-sensor-library INTERFACE)

target_sources(pac-protocentral-fdc1004-capacitive-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ProtoCentral_fdc1004_breakout/src/Protocental_FDC1004.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ProtoCentral_fdc1004_breakout/src/Protocentral_FDC1004.h"
)

target_include_directories(pac-protocentral-fdc1004-capacitive-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ProtoCentral_fdc1004_breakout/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-protocentral-fdc1004-capacitive-sensor-library INTERFACE
    arduino-compat
)
