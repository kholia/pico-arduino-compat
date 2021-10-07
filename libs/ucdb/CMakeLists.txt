add_library(pac-ucdb INTERFACE)

target_sources(pac-ucdb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uCDB/src/uCDB.hpp"
)

target_include_directories(pac-ucdb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uCDB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ucdb INTERFACE
    arduino-compat
)
