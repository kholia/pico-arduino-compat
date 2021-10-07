add_library(pac-emuserial INTERFACE)

target_sources(pac-emuserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/EMUSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/EMUSerial.h"
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/format/emuFormat.h"
  "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src/format/emuStruct.h"
)

target_include_directories(pac-emuserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMUSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emuserial INTERFACE
    arduino-compat
)
