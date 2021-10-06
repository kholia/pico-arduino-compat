add_library(ms5x INTERFACE)

target_sources(ms5x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ms5x/src/MS5x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ms5x/src/MS5x.h"
)

target_include_directories(ms5x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ms5x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ms5x INTERFACE
    arduino-compat
)
