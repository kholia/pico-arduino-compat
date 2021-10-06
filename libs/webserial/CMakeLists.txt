add_library(webserial INTERFACE)

target_sources(webserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src/WebSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src/webserial_webpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src/WebSerial.h"
)

target_include_directories(webserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WebSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(webserial INTERFACE
    arduino-compat
)
