add_library(pac-ds1821 INTERFACE)

target_sources(pac-ds1821 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS1821/DS1821.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS1821/DS1821.h"
)

target_include_directories(pac-ds1821 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS1821"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds1821 INTERFACE
    arduino-compat
)
