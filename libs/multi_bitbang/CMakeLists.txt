add_library(pac-multi_bitbang INTERFACE)

target_sources(pac-multi_bitbang INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Multi_BitBang/src/Multi_BitBang.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Multi_BitBang/src/Multi_BitBang.h"
)

target_include_directories(pac-multi_bitbang INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Multi_BitBang/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-multi_bitbang INTERFACE
    arduino-compat
)
