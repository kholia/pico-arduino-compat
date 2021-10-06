add_library(bh1750fvi INTERFACE)

target_sources(bh1750fvi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI/src/BH1750FVI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI/src/BH1750FVI.h"
)

target_include_directories(bh1750fvi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bh1750fvi INTERFACE
    arduino-compat
)
