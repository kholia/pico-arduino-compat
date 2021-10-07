add_library(pac-emotibit-ncp5623 INTERFACE)

target_sources(pac-emotibit-ncp5623 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_NCP5623/src/EmotiBit_NCP5623.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_NCP5623/src/EmotiBit_NCP5623.h"
)

target_include_directories(pac-emotibit-ncp5623 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_NCP5623/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emotibit-ncp5623 INTERFACE
    arduino-compat
)
