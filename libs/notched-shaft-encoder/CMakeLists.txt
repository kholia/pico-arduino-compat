add_library(pac-notched-shaft-encoder INTERFACE)

target_sources(pac-notched-shaft-encoder INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Notched-Shaft-Encoder/NSEncoder_btn.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Notched-Shaft-Encoder/NSEncoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Notched-Shaft-Encoder/NSEncoder.h"
)

target_include_directories(pac-notched-shaft-encoder INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Notched-Shaft-Encoder"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-notched-shaft-encoder INTERFACE
    arduino-compat
)
