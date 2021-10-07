add_library(pac-sparkfun-touchinput-driver-ft5xx6 INTERFACE)

target_sources(pac-sparkfun-touchinput-driver-ft5xx6 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Driver_FT5xx6/src/SparkFun_TouchInput_Driver_FT5xx6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Driver_FT5xx6/src/util/SparkFun_FT5xx6.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Driver_FT5xx6/src/SparkFun_TouchInput_Driver_FT5xx6.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Driver_FT5xx6/src/util/SparkFun_FT5xx6.h"
)

target_include_directories(pac-sparkfun-touchinput-driver-ft5xx6 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_TouchInput_Driver_FT5xx6/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-touchinput-driver-ft5xx6 INTERFACE
    arduino-compat
)
