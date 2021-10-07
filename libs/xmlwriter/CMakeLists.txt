add_library(pac-xmlwriter INTERFACE)

target_sources(pac-xmlwriter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XMLWriter/XMLWriter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XMLWriter/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XMLWriter/XMLWriter.h"
)

target_include_directories(pac-xmlwriter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XMLWriter"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xmlwriter INTERFACE
    arduino-compat
)
