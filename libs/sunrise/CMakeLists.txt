add_library(sunrise INTERFACE)

target_sources(sunrise INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SunRise/SunRise.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SunRise/examples/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SunRise/SunRise.h"
)

target_include_directories(sunrise INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SunRise"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sunrise INTERFACE
    arduino-compat
)
