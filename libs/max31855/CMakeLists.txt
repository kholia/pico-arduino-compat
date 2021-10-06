add_library(max31855 INTERFACE)

target_sources(max31855 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX31855/src/MAX31855.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31855/src/MAX31855.h"
)

target_include_directories(max31855 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX31855/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max31855 INTERFACE
    arduino-compat
)
