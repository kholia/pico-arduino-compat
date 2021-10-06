add_library(gyverfifo INTERFACE)

target_sources(gyverfifo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverFIFO/src/GyverFIFO.h"
)

target_include_directories(gyverfifo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverFIFO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverfifo INTERFACE
    arduino-compat
)
