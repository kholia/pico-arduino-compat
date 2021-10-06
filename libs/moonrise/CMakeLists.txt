add_library(moonrise INTERFACE)

target_sources(moonrise INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MoonRise/MoonRise.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MoonRise/examples/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MoonRise/MoonRise.h"
)

target_include_directories(moonrise INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MoonRise"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(moonrise INTERFACE
    arduino-compat
)
