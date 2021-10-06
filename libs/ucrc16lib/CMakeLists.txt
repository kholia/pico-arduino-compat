add_library(ucrc16lib INTERFACE)

target_sources(ucrc16lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16Lib/src/uCRC16Lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uCRC16Lib/src/uCRC16Lib.h"
)

target_include_directories(ucrc16lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uCRC16Lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ucrc16lib INTERFACE
    arduino-compat
)
