add_library(pac-max31855 INTERFACE)

target_sources(pac-max31855 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX31855/src/MAX31855.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31855/src/MAX31855.h"
)

target_include_directories(pac-max31855 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX31855/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max31855 INTERFACE
    arduino-compat
)
