add_library(devrandom INTERFACE)

target_sources(devrandom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DEVRANDOM/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DEVRANDOM/DEVRANDOM.h"
)

target_include_directories(devrandom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DEVRANDOM"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(devrandom INTERFACE
    arduino-compat
)
