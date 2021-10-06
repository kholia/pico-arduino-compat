add_library(snappyproto INTERFACE)

target_sources(snappyproto INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/proto/pb_decode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/proto/pb_common.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/proto/pb_encode.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/snappy/util.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/snappy/snappy.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/snappy.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/SnappyProto.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/proto/pb_encode.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/proto/pb.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/proto/pb_decode.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/proto/pb_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/snappy/snappy.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/snappy/util.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/snappy/compat.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src/snappy/snappy-int.h"
)

target_include_directories(snappyproto INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-snappy-proto/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(snappyproto INTERFACE
    arduino-compat
)
