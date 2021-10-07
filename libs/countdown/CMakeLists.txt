add_library(pac-countdown INTERFACE)

target_sources(pac-countdown INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CountDown/CountDown.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CountDown/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CountDown/CountDown.h"
)

target_include_directories(pac-countdown INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CountDown"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-countdown INTERFACE
    arduino-compat
)
