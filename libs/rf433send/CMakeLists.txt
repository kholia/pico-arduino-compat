add_library(rf433send INTERFACE)

target_sources(rf433send INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rf433send/RF433send.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rf433send/RF433send.h"
)

target_include_directories(rf433send INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rf433send"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rf433send INTERFACE
    arduino-compat
)
