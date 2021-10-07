add_library(pac-xlr8info INTERFACE)

target_sources(pac-xlr8info INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Info/src/XLR8Info.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Info/src/XLR8Info.h"
)

target_include_directories(pac-xlr8info INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Info/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8info INTERFACE
    arduino-compat
)
