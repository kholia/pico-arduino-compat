add_library(pac-viewmarq INTERFACE)

target_sources(pac-viewmarq INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ViewMarq/src/ViewMarq.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ViewMarq/src/ViewMarq.h"
  "${CMAKE_CURRENT_LIST_DIR}/ViewMarq/examples/WiFi_HelloWorld/arduino_secrets.h"
)

target_include_directories(pac-viewmarq INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ViewMarq/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-viewmarq INTERFACE
    arduino-compat
)
