add_library(safestring INTERFACE)

target_sources(safestring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/loopTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/BufferedOutput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/millisDelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeStringReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeStringStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/BufferedInput.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SerialComs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/BufferedInput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeStringNameSpaceEnd.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SerialComs.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeStringReader.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/BufferedOutput.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/millisDelay.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeString.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/loopTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeStringNameSpace.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeStringStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/SafeString/src/SafeStringNameSpaceStart.h"
)

target_include_directories(safestring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SafeString/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(safestring INTERFACE
    arduino-compat
)
