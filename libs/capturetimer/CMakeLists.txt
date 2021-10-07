add_library(pac-capturetimer INTERFACE)

target_sources(pac-capturetimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CaptureTimer/src/CaptureTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CaptureTimer/src/CaptureTimer.h"
)

target_include_directories(pac-capturetimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CaptureTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-capturetimer INTERFACE
    arduino-compat
)
