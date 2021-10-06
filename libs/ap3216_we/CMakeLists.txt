add_library(ap3216_we INTERFACE)

target_sources(ap3216_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AP3216_WE/src/AP3216_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AP3216_WE/src/AP3216_WE.h"
)

target_include_directories(ap3216_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AP3216_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ap3216_we INTERFACE
    arduino-compat
)
