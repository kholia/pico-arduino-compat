add_library(pac-webserial INTERFACE)

target_sources(pac-webserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src/WebSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src/webserial_webpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src/WebSerial.h"
)

target_include_directories(pac-webserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-webserial INTERFACE
    arduino-compat
)
