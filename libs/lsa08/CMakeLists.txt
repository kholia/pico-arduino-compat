add_library(lsa08 INTERFACE)

target_sources(lsa08 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/LSA08.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/DebuggerSerial/src/DebuggerSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/LSA08.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/DebuggerSerial/src/DebuggerSerial.h"
)

target_include_directories(lsa08 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSA08/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lsa08 INTERFACE
    arduino-compat
)
