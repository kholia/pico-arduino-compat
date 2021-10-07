add_library(pac-softtimers INTERFACE)

target_sources(pac-softtimers INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftTimers/test/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftTimers/test/TestSoftTimers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftTimers/src/SoftTimers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftTimers/test/TestSoftTimers.h"
  "${CMAKE_CURRENT_LIST_DIR}/SoftTimers/src/SoftTimers.h"
)

target_include_directories(pac-softtimers INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftTimers/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-softtimers INTERFACE
    arduino-compat
)
