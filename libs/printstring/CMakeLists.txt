add_library(pac-printstring INTERFACE)

target_sources(pac-printstring INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintString/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintString/PrintString.h"
)

target_include_directories(pac-printstring INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintString"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-printstring INTERFACE
    arduino-compat
)
