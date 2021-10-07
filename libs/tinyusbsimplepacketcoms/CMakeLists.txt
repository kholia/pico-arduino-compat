add_library(pac-tinyusbsimplepacketcoms INTERFACE)

target_sources(pac-tinyusbsimplepacketcoms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyUSBSimplePacketComs/TinyUSBSimplePacketComs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyUSBSimplePacketComs/TinyUSBSimplePacketComs.h"
)

target_include_directories(pac-tinyusbsimplepacketcoms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyUSBSimplePacketComs"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyusbsimplepacketcoms INTERFACE
    arduino-compat
)
