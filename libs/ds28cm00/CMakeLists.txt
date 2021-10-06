add_library(ds28cm00 INTERFACE)

target_sources(ds28cm00 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS28CM00/DS28CM00.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS28CM00/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS28CM00/DS28CM00.h"
)

target_include_directories(ds28cm00 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS28CM00"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds28cm00 INTERFACE
    arduino-compat
)
