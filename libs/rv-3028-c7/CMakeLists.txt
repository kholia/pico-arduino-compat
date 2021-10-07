add_library(pac-rv-3028-c7 INTERFACE)

target_sources(pac-rv-3028-c7 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RV-3028-C7-Arduino-Library/src/RV3028C7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RV-3028-C7-Arduino-Library/src/RV3028C7.h"
)

target_include_directories(pac-rv-3028-c7 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RV-3028-C7-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rv-3028-c7 INTERFACE
    arduino-compat
)
