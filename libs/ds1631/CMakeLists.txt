add_library(ds1631 INTERFACE)

target_sources(ds1631 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS1631/src/DS1631.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS1631/src/DS1631.h"
)

target_include_directories(ds1631 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS1631/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds1631 INTERFACE
    arduino-compat
)
