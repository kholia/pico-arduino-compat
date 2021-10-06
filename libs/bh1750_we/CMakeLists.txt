add_library(bh1750_we INTERFACE)

target_sources(bh1750_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BH1750_WE/src/BH1750_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BH1750_WE/src/BH1750_WE.h"
)

target_include_directories(bh1750_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BH1750_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bh1750_we INTERFACE
    arduino-compat
)
