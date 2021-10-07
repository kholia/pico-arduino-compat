add_library(pac-sparkfun-minimoto INTERFACE)

target_sources(pac-sparkfun-minimoto INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MiniMoto_Arduino_Library/src/SparkFunMiniMoto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MiniMoto_Arduino_Library/src/SparkFunMiniMoto.h"
)

target_include_directories(pac-sparkfun-minimoto INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MiniMoto_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparkfun-minimoto INTERFACE
    arduino-compat
)
