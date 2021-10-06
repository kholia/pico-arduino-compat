add_library(ad520x INTERFACE)

target_sources(ad520x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD520X/AD520X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD520X/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD520X/AD520X.h"
)

target_include_directories(ad520x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD520X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad520x INTERFACE
    arduino-compat
)
