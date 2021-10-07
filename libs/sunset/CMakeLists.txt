add_library(pac-sunset INTERFACE)

target_sources(pac-sunset INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sunset/test/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sunset/test/sunset_tests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sunset/src/sunset.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sunset/src/sunset.h"
)

target_include_directories(pac-sunset INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sunset/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sunset INTERFACE
    arduino-compat
)
