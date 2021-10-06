add_library(emuserial INTERFACE)

target_sources(emuserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/EMUSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/EMUSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/format/emuFormat.h"
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/format/emuStruct.h"
)

target_include_directories(emuserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emuserial INTERFACE
    arduino-compat
)
