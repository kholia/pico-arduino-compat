add_library(pac-anyrtttl INTERFACE)

target_sources(pac-anyrtttl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/test/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/test/TestAnyRtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/src/binrtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/src/anyrtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/test/TestAnyRtttl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/src/pitches.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/src/anyrtttl.h"
  "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/src/binrtttl.h"
)

target_include_directories(pac-anyrtttl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnyRtttl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-anyrtttl INTERFACE
    arduino-compat
)
