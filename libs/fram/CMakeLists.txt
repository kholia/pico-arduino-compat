add_library(fram INTERFACE)

target_sources(fram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FRAM/src/Fram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FRAM/src/Fram.h"
)

target_include_directories(fram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fram INTERFACE
    arduino-compat
)
