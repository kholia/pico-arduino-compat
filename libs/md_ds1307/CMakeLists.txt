add_library(md_ds1307 INTERFACE)

target_sources(md_ds1307 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_DS1307/src/MD_DS1307.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_DS1307/src/MD_DS1307.h"
)

target_include_directories(md_ds1307 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_DS1307/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(md_ds1307 INTERFACE
    arduino-compat
)
