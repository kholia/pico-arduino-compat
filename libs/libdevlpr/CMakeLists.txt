add_library(pac-libdevlpr INTERFACE)

target_sources(pac-libdevlpr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/libdevlpr/src/Devlpr.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/libdevlpr/src/Libdevlpr.h"
  "${CMAKE_CURRENT_LIST_DIR}/libdevlpr/src/Devlpr.h"
)

target_include_directories(pac-libdevlpr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/libdevlpr/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-libdevlpr INTERFACE
    arduino-compat
)
