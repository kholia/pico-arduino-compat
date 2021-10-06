add_library(gyveruart INTERFACE)

target_sources(gyveruart INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverUART/src/GyverUART.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverUART/src/GyverUART.h"
)

target_include_directories(gyveruart INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverUART/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyveruart INTERFACE
    arduino-compat
)
