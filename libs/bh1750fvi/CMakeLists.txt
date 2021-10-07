add_library(pac-bh1750fvi INTERFACE)

target_sources(pac-bh1750fvi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI/src/BH1750FVI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI/src/BH1750FVI.h"
)

target_include_directories(pac-bh1750fvi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bh1750fvi INTERFACE
    arduino-compat
)
