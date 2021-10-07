add_library(pac-gm1602lib INTERFACE)

target_sources(pac-gm1602lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GM1602lib/GM1602lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GM1602lib/GM1602lib.h"
)

target_include_directories(pac-gm1602lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GM1602lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gm1602lib INTERFACE
    arduino-compat
)
