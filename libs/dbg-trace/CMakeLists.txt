add_library(pac-dbg-trace INTERFACE)

target_sources(pac-dbg-trace INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgTraceContext.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgPrintFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgTracePort.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgTraceOut.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgPrintConsole.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgTraceLevel.h"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgPrintFile.h"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgTraceOut.h"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/IDbgPrint.h"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgPrintConsole.h"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgTracePort.h"
  "${CMAKE_CURRENT_LIST_DIR}/dbg-trace/DbgTraceContext.h"
)

target_include_directories(pac-dbg-trace INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dbg-trace"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dbg-trace INTERFACE
    arduino-compat
)
