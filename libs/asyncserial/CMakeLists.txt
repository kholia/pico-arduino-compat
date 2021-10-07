add_library(pac-asyncserial INTERFACE)

target_sources(pac-asyncserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSerial/src/AsyncSerialLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSerial/src/AsyncSerialLib.h"
)

target_include_directories(pac-asyncserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asyncserial INTERFACE
    arduino-compat
)
