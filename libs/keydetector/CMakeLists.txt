add_library(keydetector INTERFACE)

target_sources(keydetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KeyDetector/src/KeyDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KeyDetector/src/KeyDetector.h"
)

target_include_directories(keydetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KeyDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(keydetector INTERFACE
    arduino-compat
)
