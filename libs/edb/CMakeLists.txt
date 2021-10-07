add_library(pac-edb INTERFACE)

target_sources(pac-edb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EDB/EDB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EDB/EDB.h"
)

target_include_directories(pac-edb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EDB"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-edb INTERFACE
    arduino-compat
)
