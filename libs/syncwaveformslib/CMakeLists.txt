add_library(pac-syncwaveformslib INTERFACE)

target_sources(pac-syncwaveformslib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src/SyncBases.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src/SyncTransformation.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src/SyncOperation.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src/SyncWaveforms.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src/SyncBases.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src/SyncPredefined.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src/SyncFunctions.h"
)

target_include_directories(pac-syncwaveformslib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SyncWaveforms/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-syncwaveformslib INTERFACE
    arduino-compat
)
