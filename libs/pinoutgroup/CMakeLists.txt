add_library(pac-pinoutgroup INTERFACE)

target_sources(pac-pinoutgroup INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PinOutGroup/PinOutGroup.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinOutGroup/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinOutGroup/PinOutGroup.h"
)

target_include_directories(pac-pinoutgroup INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PinOutGroup"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pinoutgroup INTERFACE
    arduino-compat
)
