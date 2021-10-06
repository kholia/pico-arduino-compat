add_library(m5_ad9833 INTERFACE)

target_sources(m5_ad9833 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5_AD9833/src/M5_AD9833.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5_AD9833/examples/DDS_AD9833/WaveIcon.c"
  "${CMAKE_CURRENT_LIST_DIR}/M5_AD9833/src/M5_AD9833.h"
)

target_include_directories(m5_ad9833 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5_AD9833/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5_ad9833 INTERFACE
    arduino-compat
)
