add_library(pac-arduino_nineaxesmotion INTERFACE)

target_sources(pac-arduino_nineaxesmotion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_NineAxesMotion/src/Arduino_NineAxesMotion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_NineAxesMotion/src/utility/BNO055.c"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_NineAxesMotion/src/Arduino_NineAxesMotion.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_NineAxesMotion/src/utility/BNO055.h"
)

target_include_directories(pac-arduino_nineaxesmotion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_NineAxesMotion/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_nineaxesmotion INTERFACE
    arduino-compat
)
