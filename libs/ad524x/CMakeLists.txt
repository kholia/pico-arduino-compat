add_library(ad524x INTERFACE)

target_sources(ad524x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD524X/AD524X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD524X/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD524X/AD524X.h"
)

target_include_directories(ad524x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD524X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad524x INTERFACE
    arduino-compat
)
