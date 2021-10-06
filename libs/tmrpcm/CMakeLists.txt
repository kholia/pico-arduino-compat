add_library(tmrpcm INTERFACE)

target_sources(tmrpcm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/TMRpcm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/pcmRF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/pcmConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/pcmRF.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/TMRpcm.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/examples/xtraFeatures/streamingExamples/musicStreamerSimple/printf.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/examples/xtraFeatures/streamingExamples/musicStreamerComplex/printf.h"
)

target_include_directories(tmrpcm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMRpcm"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(tmrpcm INTERFACE
    arduino-compat
    official-sd
)
