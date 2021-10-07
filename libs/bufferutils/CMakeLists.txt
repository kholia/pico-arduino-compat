add_library(pac-bufferutils INTERFACE)

target_sources(pac-bufferutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferPrinter.h"
)

target_include_directories(pac-bufferutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bufferutils INTERFACE
    arduino-compat
)
