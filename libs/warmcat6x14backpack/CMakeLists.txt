add_library(warmcat6x14backpack INTERFACE)

target_sources(warmcat6x14backpack INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WarmCat_6x14Backpack/WarmCat_6x14Backpack.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WarmCat_6x14Backpack/WarmCat_6x14Backpack.h"
)

target_include_directories(warmcat6x14backpack INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WarmCat_6x14Backpack"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(warmcat6x14backpack INTERFACE
    arduino-compat
)
