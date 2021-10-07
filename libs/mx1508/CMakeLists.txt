add_library(pac-mx1508 INTERFACE)

target_sources(pac-mx1508 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MX1508/MX1508.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MX1508/MX1508.h"
)

target_include_directories(pac-mx1508 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MX1508"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mx1508 INTERFACE
    arduino-compat
)
