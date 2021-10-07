add_library(pac-cmdarduino INTERFACE)

target_sources(pac-cmdarduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cmdArduino/cmdArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cmdArduino/cmdArduino.h"
)

target_include_directories(pac-cmdarduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cmdArduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cmdarduino INTERFACE
    arduino-compat
)
