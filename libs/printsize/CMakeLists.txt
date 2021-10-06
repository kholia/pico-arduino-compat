add_library(printsize INTERFACE)

target_sources(printsize INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintSize/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintSize/PrintSize.h"
)

target_include_directories(printsize INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintSize"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(printsize INTERFACE
    arduino-compat
)
