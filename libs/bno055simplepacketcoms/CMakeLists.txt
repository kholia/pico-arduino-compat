add_library(bno055simplepacketcoms INTERFACE)

target_sources(bno055simplepacketcoms INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BNO055SimplePacketComs/src/GetIMU.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BNO055SimplePacketComs/src/BNO055SimplePacketComs.h"
  "${CMAKE_CURRENT_LIST_DIR}/BNO055SimplePacketComs/src/GetIMU.h"
)

target_include_directories(bno055simplepacketcoms INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BNO055SimplePacketComs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bno055simplepacketcoms INTERFACE
    arduino-compat
)
