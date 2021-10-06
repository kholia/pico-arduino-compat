add_library(dlpacket INTERFACE)

target_sources(dlpacket INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DLPacket/src/DLPacket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DLPacket/src/DLPacket.h"
)

target_include_directories(dlpacket INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DLPacket/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dlpacket INTERFACE
    arduino-compat
)
