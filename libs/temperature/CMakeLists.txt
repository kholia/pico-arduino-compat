add_library(temperature INTERFACE)

target_sources(temperature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Temperature/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Temperature/temperature.h"
)

target_include_directories(temperature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Temperature"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(temperature INTERFACE
    arduino-compat
)
