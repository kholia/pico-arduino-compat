add_library(averagevalue INTERFACE)

target_sources(averagevalue INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/average-value/src/AverageValue.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/average-value/src/AverageValue.h"
)

target_include_directories(averagevalue INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/average-value/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(averagevalue INTERFACE
    arduino-compat
)
