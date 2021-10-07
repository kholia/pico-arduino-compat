add_library(pac-printchararray INTERFACE)

target_sources(pac-printchararray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintCharArray/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintCharArray/PrintCharArray.h"
)

target_include_directories(pac-printchararray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintCharArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-printchararray INTERFACE
    arduino-compat
)
