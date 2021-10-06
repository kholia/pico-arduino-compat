add_library(serialtowifi INTERFACE)

target_sources(serialtowifi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialToWifi/src/SerialToWifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialToWifi/src/SerialToWifi.h"
)

target_include_directories(serialtowifi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialToWifi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialtowifi INTERFACE
    arduino-compat
)
