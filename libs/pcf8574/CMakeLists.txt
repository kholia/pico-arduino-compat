add_library(pac-pcf8574 INTERFACE)

target_sources(pac-pcf8574 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574/PCF8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574/PCF8574.h"
)

target_include_directories(pac-pcf8574 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF8574"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pcf8574 INTERFACE
    arduino-compat
)
