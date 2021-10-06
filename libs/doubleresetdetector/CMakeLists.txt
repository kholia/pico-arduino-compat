add_library(doubleresetdetector INTERFACE)

target_sources(doubleresetdetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetector/src/DoubleResetDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetector/src/DoubleResetDetector.h"
)

target_include_directories(doubleresetdetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(doubleresetdetector INTERFACE
    arduino-compat
)
