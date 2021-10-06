add_library(gtt INTERFACE)

target_sources(gtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_ext_types.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_events.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_protocol.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_parser.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_text.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_packet_builder.c"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_enum.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_text.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_device.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_ext_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_events.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_packet_builder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src/gtt_protocol.h"
)

target_include_directories(gtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixOrbitalGTTClientLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gtt INTERFACE
    arduino-compat
)
