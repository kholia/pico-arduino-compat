add_library(sht85 INTERFACE)

target_sources(sht85 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHT85/SHT85.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT85/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT85/SHT85.h"
)

target_include_directories(sht85 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHT85"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sht85 INTERFACE
    arduino-compat
)
