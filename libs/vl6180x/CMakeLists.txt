add_library(pac-vl6180x INTERFACE)

target_sources(pac-vl6180x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vl6180x-arduino/VL6180X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vl6180x-arduino/VL6180X.h"
)

target_include_directories(pac-vl6180x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vl6180x-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vl6180x INTERFACE
    arduino-compat
)
