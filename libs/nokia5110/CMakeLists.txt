add_library(nokia5110 INTERFACE)

target_sources(nokia5110 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nokia5110LCD/src/Nokia5110.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nokia5110LCD/src/Nokia5110.h"
)

target_include_directories(nokia5110 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nokia5110LCD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nokia5110 INTERFACE
    arduino-compat
)
