add_library(pac-md_ds3231 INTERFACE)

target_sources(pac-md_ds3231 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_DS3231/src/MD_DS3231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_DS3231/src/MD_DS3231.h"
)

target_include_directories(pac-md_ds3231 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_DS3231/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_ds3231 INTERFACE
    arduino-compat
)
