add_library(pac-ds3231m INTERFACE)

target_sources(pac-ds3231m INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS3231M/src/DS3231M.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS3231M/src/DS3231M.h"
)

target_include_directories(pac-ds3231m INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS3231M/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds3231m INTERFACE
    arduino-compat
)
