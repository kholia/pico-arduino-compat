add_library(pac-streamlib INTERFACE)

target_sources(pac-streamlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/CStringBuilder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/BufferedPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/PrintPlus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/ChunkedPrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/ChunkedPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/StreamLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/BufferedPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/PrintPlus.h"
  "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src/CStringBuilder.h"
)

target_include_directories(pac-streamlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StreamLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-streamlib INTERFACE
    arduino-compat
)
