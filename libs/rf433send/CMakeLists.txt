add_library(pac-rf433send INTERFACE)

target_sources(pac-rf433send INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rf433send/RF433send.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rf433send/RF433send.h"
)

target_include_directories(pac-rf433send INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rf433send"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rf433send INTERFACE
    arduino-compat
)
