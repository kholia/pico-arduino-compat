add_library(pac-ts4231-library INTERFACE)

target_sources(pac-ts4231-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TS4231/ts4231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TS4231/ts4231.h"
)

target_include_directories(pac-ts4231-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TS4231"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ts4231-library INTERFACE
    arduino-compat
)
