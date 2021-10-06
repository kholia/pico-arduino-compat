add_library(piningroup INTERFACE)

target_sources(piningroup INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PinInGroup/PinInGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinInGroup/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinInGroup/PinInGroup.h"
)

target_include_directories(piningroup INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PinInGroup"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(piningroup INTERFACE
    arduino-compat
)
