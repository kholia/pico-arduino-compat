add_library(pac-melopero-apds9960 INTERFACE)

target_sources(pac-melopero-apds9960 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_APDS-9960_Arduino_Library/src/Melopero_APDS9960.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_APDS-9960_Arduino_Library/src/Melopero_APDS9960.h"
)

target_include_directories(pac-melopero-apds9960 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_APDS-9960_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-melopero-apds9960 INTERFACE
    arduino-compat
)
