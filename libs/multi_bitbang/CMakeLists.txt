add_library(multi_bitbang INTERFACE)

target_sources(multi_bitbang INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Multi_BitBang/src/Multi_BitBang.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multi_BitBang/src/Multi_BitBang.h"
)

target_include_directories(multi_bitbang INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Multi_BitBang/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multi_bitbang INTERFACE
    arduino-compat
)
