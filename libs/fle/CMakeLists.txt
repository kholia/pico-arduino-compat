add_library(pac-fle INTERFACE)

target_sources(pac-fle INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FLE/FLE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FLE/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FLE/FLE.h"
)

target_include_directories(pac-fle INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FLE"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fle INTERFACE
    arduino-compat
)
