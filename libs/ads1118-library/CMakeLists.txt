add_library(pac-ads1118-library INTERFACE)

target_sources(pac-ads1118-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ADS1118/ADS1118.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1118/nbproject/private/cpp_standard_headers_indexer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1118/nbproject/private/c_standard_headers_indexer.c"
  "${CMAKE_CURRENT_LIST_DIR}/ADS1118/ADS1118.h"
)

target_include_directories(pac-ads1118-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ADS1118"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ads1118-library INTERFACE
    arduino-compat
)
