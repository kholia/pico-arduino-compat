add_library(cmdarduino INTERFACE)

target_sources(cmdarduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cmdArduino/cmdArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cmdArduino/cmdArduino.h"
)

target_include_directories(cmdarduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cmdArduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cmdarduino INTERFACE
    arduino-compat
)
