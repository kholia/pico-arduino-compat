add_library(m62429 INTERFACE)

target_sources(m62429 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M62429/M62429.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M62429/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M62429/M62429.h"
)

target_include_directories(m62429 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M62429"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m62429 INTERFACE
    arduino-compat
)
