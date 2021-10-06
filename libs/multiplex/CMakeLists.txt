add_library(multiplex INTERFACE)

target_sources(multiplex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Multiplex/Multiplex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multiplex/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multiplex/Multiplex.h"
)

target_include_directories(multiplex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Multiplex"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multiplex INTERFACE
    arduino-compat
)
