add_library(pac-ucrc16bpblib INTERFACE)

target_sources(pac-ucrc16bpblib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16BPBLib/src/uCRC16BPBLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16BPBLib/src/uCRC16BPBLib.h"
)

target_include_directories(pac-ucrc16bpblib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uCRC16BPBLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ucrc16bpblib INTERFACE
    arduino-compat
)
