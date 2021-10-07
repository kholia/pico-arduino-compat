add_library(pac-bh1750fvi_rt INTERFACE)

target_sources(pac-bh1750fvi_rt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI_RT/BH1750FVI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI_RT/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI_RT/BH1750FVI.h"
)

target_include_directories(pac-bh1750fvi_rt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BH1750FVI_RT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bh1750fvi_rt INTERFACE
    arduino-compat
)
