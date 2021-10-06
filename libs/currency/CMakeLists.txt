add_library(currency INTERFACE)

target_sources(currency INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Currency/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Currency/currency.h"
)

target_include_directories(currency INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Currency"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(currency INTERFACE
    arduino-compat
)
