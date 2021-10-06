add_library(pcf8523 INTERFACE)

target_sources(pcf8523 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF8523/PCF8523.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8523/PCF8523.h"
)

target_include_directories(pcf8523 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF8523"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pcf8523 INTERFACE
    arduino-compat
)
