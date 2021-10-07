add_library(pac-iotec_max7319 INTERFACE)

target_sources(pac-iotec_max7319 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iotec_MAX7319/src/iotec_MAX7319.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iotec_MAX7319/src/iotec_MAX7319.h"
)

target_include_directories(pac-iotec_max7319 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iotec_MAX7319/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iotec_max7319 INTERFACE
    arduino-compat
)
