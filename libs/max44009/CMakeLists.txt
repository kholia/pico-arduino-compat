add_library(pac-max44009 INTERFACE)

target_sources(pac-max44009 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Max44009/Max44009.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Max44009/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Max44009/Max44009.h"
)

target_include_directories(pac-max44009 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Max44009"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max44009 INTERFACE
    arduino-compat
)
