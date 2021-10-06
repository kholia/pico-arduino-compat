add_library(openmv-arduino-rpc INTERFACE)

target_sources(openmv-arduino-rpc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/openmv-arduino-rpc/src/openmvrpc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/openmv-arduino-rpc/src/openmvrpc.h"
)

target_include_directories(openmv-arduino-rpc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/openmv-arduino-rpc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(openmv-arduino-rpc INTERFACE
    arduino-compat
)
