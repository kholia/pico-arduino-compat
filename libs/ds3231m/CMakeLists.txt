add_library(ds3231m INTERFACE)

target_sources(ds3231m INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS3231M/src/DS3231M.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS3231M/src/DS3231M.h"
)

target_include_directories(ds3231m INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS3231M/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds3231m INTERFACE
    arduino-compat
)
