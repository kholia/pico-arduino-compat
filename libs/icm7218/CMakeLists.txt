add_library(icm7218 INTERFACE)

target_sources(icm7218 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ICM7218/src/ICM7218.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ICM7218/src/ICM7218.h"
)

target_include_directories(icm7218 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ICM7218/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(icm7218 INTERFACE
    arduino-compat
)
