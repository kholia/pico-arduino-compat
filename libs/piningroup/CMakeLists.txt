add_library(pac-piningroup INTERFACE)

target_sources(pac-piningroup INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PinInGroup/PinInGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinInGroup/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinInGroup/PinInGroup.h"
)

target_include_directories(pac-piningroup INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PinInGroup"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-piningroup INTERFACE
    arduino-compat
)
