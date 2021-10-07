add_library(pac-wifilocation INTERFACE)

target_sources(pac-wifilocation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WifiLocation/src/WifiLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WifiLocation/src/WifiLocation.h"
)

target_include_directories(pac-wifilocation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WifiLocation/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wifilocation INTERFACE
    arduino-compat
)
