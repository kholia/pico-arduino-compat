add_library(pac-arduino_mkrrgb INTERFACE)

target_sources(pac-arduino_mkrrgb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRRGB/src/MKRRGBMatrix.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRRGB/src/Arduino_MKRRGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRRGB/src/MKRRGBMatrix.h"
)

target_include_directories(pac-arduino_mkrrgb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MKRRGB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_mkrrgb INTERFACE
    arduino-compat
)
