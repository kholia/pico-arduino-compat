add_library(teensyaudioflashloader INTERFACE)

target_sources(teensyaudioflashloader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src/flashloader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src/TeensyAudioFlashLoader.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src/flashloader.h"
)

target_include_directories(teensyaudioflashloader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(teensyaudioflashloader INTERFACE
    arduino-compat
    official-sd
)
