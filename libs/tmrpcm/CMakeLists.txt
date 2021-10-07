add_library(pac-tmrpcm INTERFACE)

target_sources(pac-tmrpcm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/TMRpcm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/pcmRF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/pcmConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/pcmRF.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/TMRpcm.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/examples/xtraFeatures/streamingExamples/musicStreamerSimple/printf.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMRpcm/examples/xtraFeatures/streamingExamples/musicStreamerComplex/printf.h"
)

target_include_directories(pac-tmrpcm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMRpcm"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-tmrpcm INTERFACE
    arduino-compat
    pac-sd
)
