add_library(pcf8575 INTERFACE)

target_sources(pcf8575 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF8575/PCF8575.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8575/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8575/PCF8575.h"
)

target_include_directories(pcf8575 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF8575"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pcf8575 INTERFACE
    arduino-compat
)
