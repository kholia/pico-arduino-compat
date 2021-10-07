add_library(pac-simpleudpcontroller INTERFACE)

target_sources(pac-simpleudpcontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleUDPController/src/SimpleUDPController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleUDPController/src/SimpleUDPController.h"
)

target_include_directories(pac-simpleudpcontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleUDPController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpleudpcontroller INTERFACE
    arduino-compat
)
