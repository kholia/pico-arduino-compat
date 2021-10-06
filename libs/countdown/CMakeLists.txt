add_library(countdown INTERFACE)

target_sources(countdown INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CountDown/CountDown.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CountDown/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CountDown/CountDown.h"
)

target_include_directories(countdown INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CountDown"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(countdown INTERFACE
    arduino-compat
)
