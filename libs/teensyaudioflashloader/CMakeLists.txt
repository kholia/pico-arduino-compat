add_library(pac-teensyaudioflashloader INTERFACE)

target_sources(pac-teensyaudioflashloader INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src/flashloader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src/TeensyAudioFlashLoader.h"
  "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src/flashloader.h"
)

target_include_directories(pac-teensyaudioflashloader INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/teensy-sample-flashloader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-teensyaudioflashloader INTERFACE
    arduino-compat
    pac-sd
)
