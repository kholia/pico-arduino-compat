add_library(ds1821 INTERFACE)

target_sources(ds1821 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS1821/DS1821.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS1821/DS1821.h"
)

target_include_directories(ds1821 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS1821"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds1821 INTERFACE
    arduino-compat
)
