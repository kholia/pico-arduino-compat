add_library(ltc2991 INTERFACE)

target_sources(ltc2991 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LTC2991/LTC2991.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LTC2991/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LTC2991/LTC2991.h"
)

target_include_directories(ltc2991 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LTC2991"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ltc2991 INTERFACE
    arduino-compat
)
