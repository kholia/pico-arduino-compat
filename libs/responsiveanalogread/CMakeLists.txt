add_library(responsiveanalogread INTERFACE)

target_sources(responsiveanalogread INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ResponsiveAnalogRead/src/ResponsiveAnalogRead.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ResponsiveAnalogRead/src/ResponsiveAnalogRead.h"
)

target_include_directories(responsiveanalogread INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ResponsiveAnalogRead/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(responsiveanalogread INTERFACE
    arduino-compat
)
