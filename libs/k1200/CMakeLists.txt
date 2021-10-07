add_library(pac-k1200 INTERFACE)

target_sources(pac-k1200 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/K1200/src/K1200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/K1200/src/K1200.h"
)

target_include_directories(pac-k1200 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/K1200/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-k1200 INTERFACE
    arduino-compat
)
