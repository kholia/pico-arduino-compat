add_library(oneiot-connectivity INTERFACE)

target_sources(oneiot-connectivity INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cloud-connectivity-lib/src/Connectivity.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cloud-connectivity-lib/src/Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/cloud-connectivity-lib/src/Connectivity.h"
)

target_include_directories(oneiot-connectivity INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cloud-connectivity-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(oneiot-connectivity INTERFACE
    arduino-compat
)
