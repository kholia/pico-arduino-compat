add_library(mx1508 INTERFACE)

target_sources(mx1508 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MX1508/MX1508.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MX1508/MX1508.h"
)

target_include_directories(mx1508 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MX1508"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mx1508 INTERFACE
    arduino-compat
)
