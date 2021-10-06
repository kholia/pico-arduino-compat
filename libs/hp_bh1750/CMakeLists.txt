add_library(hp_bh1750 INTERFACE)

target_sources(hp_bh1750 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hp_BH1750/src/hp_BH1750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hp_BH1750/src/hp_BH1750.h"
)

target_include_directories(hp_bh1750 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hp_BH1750/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hp_bh1750 INTERFACE
    arduino-compat
)
