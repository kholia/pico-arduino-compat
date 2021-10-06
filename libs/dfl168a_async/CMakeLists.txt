add_library(dfl168a_async INTERFACE)

target_sources(dfl168a_async INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A_Async/src/J1939P.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A_Async/src/GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A_Async/src/DFL168A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A_Async/src/ISO15765.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A_Async/src/J1708.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DFL168A_Async/src/DFL168A_Async.h"
)

target_include_directories(dfl168a_async INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DFL168A_Async/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dfl168a_async INTERFACE
    arduino-compat
)
