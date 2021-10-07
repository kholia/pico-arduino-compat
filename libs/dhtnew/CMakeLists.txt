add_library(pac-dhtnew INTERFACE)

target_sources(pac-dhtnew INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DHTNew/dhtnew.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHTNew/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DHTNew/dhtnew.h"
)

target_include_directories(pac-dhtnew INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DHTNew"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dhtnew INTERFACE
    arduino-compat
)
