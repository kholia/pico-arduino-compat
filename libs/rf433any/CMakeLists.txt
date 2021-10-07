add_library(pac-rf433any INTERFACE)

target_sources(pac-rf433any INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RF433any/RF433any.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF433any/RF433Serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF433any/RF433Debug.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF433any/RF433Debug.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF433any/RF433any.h"
  "${CMAKE_CURRENT_LIST_DIR}/RF433any/RF433Serial.h"
)

target_include_directories(pac-rf433any INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RF433any"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rf433any INTERFACE
    arduino-compat
)
