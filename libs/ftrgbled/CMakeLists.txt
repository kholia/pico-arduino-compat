add_library(pac-ftrgbled INTERFACE)

target_sources(pac-ftrgbled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FTRGBLED/FTRGBLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTRGBLED/FTRGBLED.h"
)

target_include_directories(pac-ftrgbled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FTRGBLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ftrgbled INTERFACE
    arduino-compat
)
