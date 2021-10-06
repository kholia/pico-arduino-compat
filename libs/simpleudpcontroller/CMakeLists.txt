add_library(simpleudpcontroller INTERFACE)

target_sources(simpleudpcontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleUDPController/src/SimpleUDPController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleUDPController/src/SimpleUDPController.h"
)

target_include_directories(simpleudpcontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleUDPController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpleudpcontroller INTERFACE
    arduino-compat
)
