add_library(pac-sodaq_hts221 INTERFACE)

target_sources(pac-sodaq_hts221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_HTS221/src/Sodaq_HTS221.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_HTS221/src/Sodaq_HTS221.h"
)

target_include_directories(pac-sodaq_hts221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_HTS221/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sodaq_hts221 INTERFACE
    arduino-compat
)
