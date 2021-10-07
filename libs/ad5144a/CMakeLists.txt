add_library(pac-ad5144a INTERFACE)

target_sources(pac-ad5144a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD5144A/AD5144A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD5144A/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD5144A/AD5144A.h"
)

target_include_directories(pac-ad5144a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD5144A"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad5144a INTERFACE
    arduino-compat
)
