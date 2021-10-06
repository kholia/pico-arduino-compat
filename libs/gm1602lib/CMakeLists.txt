add_library(gm1602lib INTERFACE)

target_sources(gm1602lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GM1602lib/GM1602lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GM1602lib/GM1602lib.h"
)

target_include_directories(gm1602lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GM1602lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gm1602lib INTERFACE
    arduino-compat
)
