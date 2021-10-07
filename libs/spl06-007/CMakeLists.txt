add_library(pac-spl06-007 INTERFACE)

target_sources(pac-spl06-007 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPL06-007/src/SPL06-007.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPL06-007/src/SPL06-007.h"
)

target_include_directories(pac-spl06-007 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPL06-007/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spl06-007 INTERFACE
    arduino-compat
)
