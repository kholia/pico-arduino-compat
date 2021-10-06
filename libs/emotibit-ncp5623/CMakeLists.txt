add_library(emotibit-ncp5623 INTERFACE)

target_sources(emotibit-ncp5623 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_NCP5623/src/EmotiBit_NCP5623.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_NCP5623/src/EmotiBit_NCP5623.h"
)

target_include_directories(emotibit-ncp5623 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_NCP5623/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emotibit-ncp5623 INTERFACE
    arduino-compat
)
