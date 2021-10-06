add_library(moonstruck INTERFACE)

target_sources(moonstruck INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MoonStruck/src/MoonStruck.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MoonStruck/src/MoonStruck.h"
)

target_include_directories(moonstruck INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MoonStruck/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(moonstruck INTERFACE
    arduino-compat
)
