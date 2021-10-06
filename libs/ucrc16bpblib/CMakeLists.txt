add_library(ucrc16bpblib INTERFACE)

target_sources(ucrc16bpblib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16BPBLib/src/uCRC16BPBLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16BPBLib/src/uCRC16BPBLib.h"
)

target_include_directories(ucrc16bpblib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uCRC16BPBLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ucrc16bpblib INTERFACE
    arduino-compat
)
