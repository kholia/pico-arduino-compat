add_library(pac-thermistor INTERFACE)

target_sources(pac-thermistor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/thermistor/thermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/thermistor/thermistor.h"
)

target_include_directories(pac-thermistor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/thermistor"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-thermistor INTERFACE
    arduino-compat
)
