add_library(pac-pcf8591 INTERFACE)

target_sources(pac-pcf8591 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF8591/PCF8591.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8591/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8591/PCF8591.h"
)

target_include_directories(pac-pcf8591 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF8591"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pcf8591 INTERFACE
    arduino-compat
)
