add_library(pac-sparkfun-clock-5p49v60-arduino-library INTERFACE)

target_sources(pac-sparkfun-clock-5p49v60-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Clock_5P49V60_Arduino_Library/src/SparkFun_5P49V60.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Clock_5P49V60_Arduino_Library/src/SparkFun_5P49V60.h"
)

target_include_directories(pac-sparkfun-clock-5p49v60-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_Clock_5P49V60_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-clock-5p49v60-arduino-library INTERFACE
    arduino-compat
)
