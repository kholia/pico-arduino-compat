add_library(krpc INTERFACE)

target_sources(krpc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/pb_common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/communication.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/error.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/pb_encode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/memory.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/pb_decode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/decoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc.pb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/encoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/memory.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/pb_encode.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/krpc.pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/types.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/communication.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/decoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/pb_decode.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/pb_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/error.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/services/kerbal_alarm_clock.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/services/infernal_robotics.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/services/ui.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/services/krpc.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/services/drawing.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/services/remote_tech.h"
  "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src/krpc/services/space_center.h"
)

target_include_directories(krpc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/krpc-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(krpc INTERFACE
    arduino-compat
)
