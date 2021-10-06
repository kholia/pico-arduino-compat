add_library(hackair INTERFACE)

target_sources(hackair INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src/hackair.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src/hackair_ethernet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src/hackair_wifi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src/hackair_errors.h"
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src/hackair_ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src/hackair.h"
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src/hackair_wifi.h"
  "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/examples/WiFiShield-Upgrade/firmware.h"
)

target_include_directories(hackair INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hackAir-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hackair INTERFACE
    arduino-compat
)
