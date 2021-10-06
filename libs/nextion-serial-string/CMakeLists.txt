add_library(nextion-serial-string INTERFACE)

target_sources(nextion-serial-string INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/src/HMIFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/src/NextionSerialString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/examples/BlinkSketch/HMIFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/examples/BlinkSketch/NextionSerialString.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/src/NextionSerialString.h"
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/src/NextionConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/examples/BlinkSketch/NextionSerialString.h"
  "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/examples/BlinkSketch/NextionConfig.h"
)

target_include_directories(nextion-serial-string INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NextionSerialString/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nextion-serial-string INTERFACE
    arduino-compat
)
