add_library(pac-bugtton INTERFACE)

target_sources(pac-bugtton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bugtton/src/Bugtton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bugtton/src/Bugtton.h"
)

target_include_directories(pac-bugtton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bugtton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bugtton INTERFACE
    arduino-compat
)
