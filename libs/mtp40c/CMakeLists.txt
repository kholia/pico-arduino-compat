add_library(mtp40c INTERFACE)

target_sources(mtp40c INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MTP40C/MTP40C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MTP40C/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MTP40C/MTP40C.h"
)

target_include_directories(mtp40c INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MTP40C"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mtp40c INTERFACE
    arduino-compat
)
