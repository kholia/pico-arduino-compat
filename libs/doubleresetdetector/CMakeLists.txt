add_library(pac-doubleresetdetector INTERFACE)

target_sources(pac-doubleresetdetector INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetector/src/DoubleResetDetector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetector/src/DoubleResetDetector.h"
)

target_include_directories(pac-doubleresetdetector INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DoubleResetDetector/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-doubleresetdetector INTERFACE
    arduino-compat
)
