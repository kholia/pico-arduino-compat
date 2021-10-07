add_library(pac-edgeml INTERFACE)

target_sources(pac-edgeml INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino/IncrementalRecorder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/EdgeML.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/EdgeML.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/IncrementalRecorder.h"
)

target_include_directories(pac-edgeml INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-edgeml INTERFACE
    arduino-compat
)
