add_library(pac-at24c256-library INTERFACE)

target_sources(pac-at24c256-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AT24C256/src/AT24C256.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AT24C256/src/AT24C256.h"
)

target_include_directories(pac-at24c256-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AT24C256/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-at24c256-library INTERFACE
    arduino-compat
)
