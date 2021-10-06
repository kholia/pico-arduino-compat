add_library(teensysimplepacketcoms INTERFACE)

target_sources(teensysimplepacketcoms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TeensySimplePacketComs/src/HID/HIDSimplePacket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensySimplePacketComs/src/TeensySimplePacketComs.h"
  "${CMAKE_CURRENT_LIST_DIR}/TeensySimplePacketComs/src/HID/HIDSimplePacket.h"
)

target_include_directories(teensysimplepacketcoms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TeensySimplePacketComs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(teensysimplepacketcoms INTERFACE
    arduino-compat
)
