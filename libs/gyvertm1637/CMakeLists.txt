add_library(gyvertm1637 INTERFACE)

target_sources(gyvertm1637 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverTM1637/src/GyverTM1637.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverTM1637/src/GyverTM1637.h"
)

target_include_directories(gyvertm1637 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverTM1637/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyvertm1637 INTERFACE
    arduino-compat
)
