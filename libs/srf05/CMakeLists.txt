add_library(pac-srf05 INTERFACE)

target_sources(pac-srf05 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SRF05/SRF05.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SRF05/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SRF05/SRF05.h"
)

target_include_directories(pac-srf05 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SRF05"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-srf05 INTERFACE
    arduino-compat
)
