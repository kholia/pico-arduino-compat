add_library(pac-rtd10k-temp-sensor INTERFACE)

target_sources(pac-rtd10k-temp-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTD10k-temp-sensor/src/RTD10K.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTD10k-temp-sensor/src/RTD10K.h"
)

target_include_directories(pac-rtd10k-temp-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTD10k-temp-sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtd10k-temp-sensor INTERFACE
    arduino-compat
)
