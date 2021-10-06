add_library(bufferutils INTERFACE)

target_sources(bufferutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferPrinter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferWriter.h"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/CircularBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src/BufferPrinter.h"
)

target_include_directories(bufferutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BufferUtils/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bufferutils INTERFACE
    arduino-compat
)
