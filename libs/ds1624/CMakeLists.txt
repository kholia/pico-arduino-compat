add_library(ds1624 INTERFACE)

target_sources(ds1624 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS1624/src/DS1624.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS1624/src/DS1624.h"
)

target_include_directories(ds1624 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS1624/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds1624 INTERFACE
    arduino-compat
)
