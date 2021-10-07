add_library(pac-vnh3sp30 INTERFACE)

target_sources(pac-vnh3sp30 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VNH3SP30/src/VNH3SP30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VNH3SP30/src/VNH3SP30.h"
)

target_include_directories(pac-vnh3sp30 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VNH3SP30/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vnh3sp30 INTERFACE
    arduino-compat
)
