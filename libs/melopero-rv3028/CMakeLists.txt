add_library(pac-melopero-rv3028 INTERFACE)

target_sources(pac-melopero-rv3028 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_RV-3028_Arduino_Library/src/Melopero_RV3028.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_RV-3028_Arduino_Library/src/Melopero_RV3028.h"
)

target_include_directories(pac-melopero-rv3028 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_RV-3028_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-melopero-rv3028 INTERFACE
    arduino-compat
)
