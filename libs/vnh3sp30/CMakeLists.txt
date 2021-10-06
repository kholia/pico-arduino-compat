add_library(vnh3sp30 INTERFACE)

target_sources(vnh3sp30 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VNH3SP30/src/VNH3SP30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VNH3SP30/src/VNH3SP30.h"
)

target_include_directories(vnh3sp30 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VNH3SP30/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vnh3sp30 INTERFACE
    arduino-compat
)
