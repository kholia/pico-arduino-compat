add_library(dhtstable INTERFACE)

target_sources(dhtstable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHTstable/DHTStable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHTstable/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHTstable/DHTStable.h"
)

target_include_directories(dhtstable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHTstable"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dhtstable INTERFACE
    arduino-compat
)
