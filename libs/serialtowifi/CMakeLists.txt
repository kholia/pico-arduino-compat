add_library(pac-serialtowifi INTERFACE)

target_sources(pac-serialtowifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialToWifi/src/SerialToWifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialToWifi/src/SerialToWifi.h"
)

target_include_directories(pac-serialtowifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialToWifi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialtowifi INTERFACE
    arduino-compat
)
