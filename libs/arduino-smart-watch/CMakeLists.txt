add_library(pac-arduino-smart-watch INTERFACE)

target_sources(pac-arduino-smart-watch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Watch/src/watch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Watch/src/watch.h"
)

target_include_directories(pac-arduino-smart-watch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Watch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-smart-watch INTERFACE
    arduino-compat
)
