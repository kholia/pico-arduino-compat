add_library(nullserial INTERFACE)

target_sources(nullserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NullSerial/src/NullSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NullSerial/src/NullSerial.h"
)

target_include_directories(nullserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NullSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nullserial INTERFACE
    arduino-compat
)
