add_library(pac-xlr8rc INTERFACE)

target_sources(pac-xlr8rc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8RC/src/XLR8RC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8RC/src/XLR8RC.h"
)

target_include_directories(pac-xlr8rc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8RC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8rc INTERFACE
    arduino-compat
)
