add_library(troolean INTERFACE)

target_sources(troolean INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Troolean/Troolean.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troolean/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Troolean/Troolean.h"
)

target_include_directories(troolean INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Troolean"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(troolean INTERFACE
    arduino-compat
)
