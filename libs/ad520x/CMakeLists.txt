add_library(pac-ad520x INTERFACE)

target_sources(pac-ad520x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD520X/AD520X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD520X/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD520X/AD520X.h"
)

target_include_directories(pac-ad520x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD520X"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad520x INTERFACE
    arduino-compat
)
