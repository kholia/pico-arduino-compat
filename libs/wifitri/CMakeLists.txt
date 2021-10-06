add_library(wifitri INTERFACE)

target_sources(wifitri INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WiFiTri/src/WiFiTri.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WiFiTri/src/WiFiTri.h"
)

target_include_directories(wifitri INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WiFiTri/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wifitri INTERFACE
    arduino-compat
)
