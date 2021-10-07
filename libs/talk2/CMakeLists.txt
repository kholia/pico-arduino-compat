add_library(pac-talk2 INTERFACE)

target_sources(pac-talk2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/T2WhisperNode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/utils/T2Firmware.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/utils/T2Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/utils/T2Task.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/protocol/T2Message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/hal/T2DataBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/hal/T2Led.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/hal/T2Flash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/T2WhisperNode.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/utils/T2Task.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/utils/T2Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/utils/T2Firmware.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/protocol/T2Message.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/hal/T2Flash.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/hal/T2Led.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src/hal/T2DataBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/examples/WhisperNodeFactory/WhisperNodeFactory.h"
)

target_include_directories(pac-talk2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Talk2Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-talk2 INTERFACE
    arduino-compat
)
