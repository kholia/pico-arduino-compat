add_library(vn_lunar INTERFACE)

target_sources(vn_lunar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vn_lunar/src/vn_lunar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vn_lunar/src/vn_lunar.h"
)

target_include_directories(vn_lunar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vn_lunar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vn_lunar INTERFACE
    arduino-compat
)
