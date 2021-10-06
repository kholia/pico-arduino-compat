add_library(ucdb INTERFACE)

target_sources(ucdb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uCDB/src/uCDB.hpp"
)

target_include_directories(ucdb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uCDB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ucdb INTERFACE
    arduino-compat
)
