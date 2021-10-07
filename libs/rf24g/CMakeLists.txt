add_library(pac-rf24g INTERFACE)

target_sources(pac-rf24g INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RF24G/rf24g.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24G/examples/rf24G_send.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24G/examples/rf24G_receive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RF24G/rf24g.h"
)

target_include_directories(pac-rf24g INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RF24G"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rf24g INTERFACE
    arduino-compat
)
