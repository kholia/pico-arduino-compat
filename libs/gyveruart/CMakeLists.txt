add_library(pac-gyveruart INTERFACE)

target_sources(pac-gyveruart INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverUART/src/GyverUART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverUART/src/GyverUART.h"
)

target_include_directories(pac-gyveruart INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverUART/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyveruart INTERFACE
    arduino-compat
)
