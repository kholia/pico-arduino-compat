add_library(gyverbus INTERFACE)

target_sources(gyverbus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverBus/src/GBUSmini.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverBus/src/GyverBus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverBus/src/GBUSmini.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverBus/src/GyverBus.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverBus/src/softUART.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverBus/src/GBUS.h"
)

target_include_directories(gyverbus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverBus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverbus INTERFACE
    arduino-compat
)
