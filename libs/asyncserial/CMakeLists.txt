add_library(asyncserial INTERFACE)

target_sources(asyncserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSerial/src/AsyncSerialLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSerial/src/AsyncSerialLib.h"
)

target_include_directories(asyncserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncserial INTERFACE
    arduino-compat
)
