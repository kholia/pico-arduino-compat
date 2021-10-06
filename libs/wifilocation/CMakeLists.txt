add_library(wifilocation INTERFACE)

target_sources(wifilocation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WifiLocation/src/WifiLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WifiLocation/src/WifiLocation.h"
)

target_include_directories(wifilocation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WifiLocation/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wifilocation INTERFACE
    arduino-compat
)
