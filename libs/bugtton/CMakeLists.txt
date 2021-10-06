add_library(bugtton INTERFACE)

target_sources(bugtton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bugtton/src/Bugtton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bugtton/src/Bugtton.h"
)

target_include_directories(bugtton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bugtton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bugtton INTERFACE
    arduino-compat
)
