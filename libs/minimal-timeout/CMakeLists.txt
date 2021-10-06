add_library(minimal-timeout INTERFACE)

target_sources(minimal-timeout INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Timeout/test/test_timeout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Timeout/src/timeout.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Timeout/src/timeout.h"
)

target_include_directories(minimal-timeout INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Timeout/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(minimal-timeout INTERFACE
    arduino-compat
)
