add_library(pac-sparkfun-qwiicrf INTERFACE)

target_sources(pac-sparkfun-qwiicrf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_QwiicRF_Library/src/QwiicRF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_QwiicRF_Library/src/QwiicRF.h"
)

target_include_directories(pac-sparkfun-qwiicrf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_QwiicRF_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-qwiicrf INTERFACE
    arduino-compat
)
