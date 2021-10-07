add_library(pac-andee INTERFACE)

target_sources(pac-andee INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Andee/src/Andee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Andee/src/Andee.h"
)

target_include_directories(pac-andee INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Andee/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-andee INTERFACE
    arduino-compat
)
