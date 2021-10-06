add_library(tinyusbsimplepacketcoms INTERFACE)

target_sources(tinyusbsimplepacketcoms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyUSBSimplePacketComs/TinyUSBSimplePacketComs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyUSBSimplePacketComs/TinyUSBSimplePacketComs.h"
)

target_include_directories(tinyusbsimplepacketcoms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyUSBSimplePacketComs"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyusbsimplepacketcoms INTERFACE
    arduino-compat
)
