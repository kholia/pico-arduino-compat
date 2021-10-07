add_library(pac-lineformatter INTERFACE)

target_sources(pac-lineformatter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LineFormatter/LineFormatter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LineFormatter/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LineFormatter/LineFormatter.h"
)

target_include_directories(pac-lineformatter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LineFormatter"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lineformatter INTERFACE
    arduino-compat
)
