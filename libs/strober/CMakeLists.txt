add_library(pac-strober INTERFACE)

target_sources(pac-strober INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Strober/Strober.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Strober/Strober.h"
)

target_include_directories(pac-strober INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Strober"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-strober INTERFACE
    arduino-compat
)
