add_library(pac-sodaq_lps22hb INTERFACE)

target_sources(pac-sodaq_lps22hb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LPS22HB/src/Sodaq_LPS22HB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LPS22HB/src/Sodaq_LPS22HB.h"
)

target_include_directories(pac-sodaq_lps22hb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_LPS22HB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_lps22hb INTERFACE
    arduino-compat
)
