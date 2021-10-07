add_library(pac-protocentral-max30205-body-temperature-sensor-library INTERFACE)

target_sources(pac-protocentral-max30205-body-temperature-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Protocentral_MAX30205/src/Protocentral_MAX30205.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Protocentral_MAX30205/src/Protocentral_MAX30205.h"
)

target_include_directories(pac-protocentral-max30205-body-temperature-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Protocentral_MAX30205/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-protocentral-max30205-body-temperature-sensor-library INTERFACE
    arduino-compat
)
