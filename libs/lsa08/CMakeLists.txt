add_library(pac-lsa08 INTERFACE)

target_sources(pac-lsa08 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/LSA08.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/DebuggerSerial/src/DebuggerSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/LSA08.h"
  "${CMAKE_CURRENT_LIST_DIR}/LSA08/src/DebuggerSerial/src/DebuggerSerial.h"
)

target_include_directories(pac-lsa08 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LSA08/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lsa08 INTERFACE
    arduino-compat
)
