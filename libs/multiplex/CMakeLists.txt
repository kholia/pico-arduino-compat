add_library(pac-multiplex INTERFACE)

target_sources(pac-multiplex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Multiplex/Multiplex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multiplex/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multiplex/Multiplex.h"
)

target_include_directories(pac-multiplex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Multiplex"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-multiplex INTERFACE
    arduino-compat
)
