add_library(pac-troolean INTERFACE)

target_sources(pac-troolean INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Troolean/Troolean.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troolean/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troolean/Troolean.h"
)

target_include_directories(pac-troolean INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Troolean"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-troolean INTERFACE
    arduino-compat
)
