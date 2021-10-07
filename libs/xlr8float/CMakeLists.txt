add_library(pac-xlr8float INTERFACE)

target_sources(pac-xlr8float INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Float/XLR8Float.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Float/XLR8Float.h"
)

target_include_directories(pac-xlr8float INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Float"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8float INTERFACE
    arduino-compat
)
