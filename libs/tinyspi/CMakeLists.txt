add_library(tinyspi INTERFACE)

target_sources(tinyspi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tinySPI/src/tinySPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tinySPI/src/tinySPI.h"
)

target_include_directories(tinyspi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tinySPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyspi INTERFACE
    arduino-compat
)
