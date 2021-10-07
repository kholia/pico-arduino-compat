add_library(pac-ds3231 INTERFACE)

target_sources(pac-ds3231 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS3231/DS3231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS3231/DS3231.h"
)

target_include_directories(pac-ds3231 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS3231"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds3231 INTERFACE
    arduino-compat
)
