add_library(pac-gyverfifo INTERFACE)

target_sources(pac-gyverfifo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverFIFO/src/GyverFIFO.h"
)

target_include_directories(pac-gyverfifo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverFIFO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverfifo INTERFACE
    arduino-compat
)
