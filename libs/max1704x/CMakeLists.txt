add_library(pac-max1704x INTERFACE)

target_sources(pac-max1704x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/max1704x/src/MAX1704X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/max1704x/src/MAX17043.h"
  "${CMAKE_CURRENT_LIST_DIR}/max1704x/src/MAX1704X.h"
  "${CMAKE_CURRENT_LIST_DIR}/max1704x/src/MAX17044.h"
)

target_include_directories(pac-max1704x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/max1704x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max1704x INTERFACE
    arduino-compat
)
