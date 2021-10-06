add_library(shex INTERFACE)

target_sources(shex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHEX/SHEX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHEX/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHEX/SHEX.h"
)

target_include_directories(shex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHEX"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(shex INTERFACE
    arduino-compat
)
