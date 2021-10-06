add_library(bh1750 INTERFACE)

target_sources(bh1750 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BH1750/src/BH1750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BH1750/src/BH1750.h"
)

target_include_directories(bh1750 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BH1750/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bh1750 INTERFACE
    arduino-compat
)
