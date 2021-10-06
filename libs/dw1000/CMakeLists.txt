add_library(dw1000 INTERFACE)

target_sources(dw1000 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Ranging.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Mac.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Device.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Time.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/require_cpp11.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Mac.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Device.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000CompileOptions.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/DW1000Ranging.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src/deprecated.h"
)

target_include_directories(dw1000 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-dw1000/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dw1000 INTERFACE
    arduino-compat
)
