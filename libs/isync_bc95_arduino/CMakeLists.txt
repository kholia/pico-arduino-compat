add_library(isync_bc95_arduino INTERFACE)

target_sources(isync_bc95_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/CoAP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/NTPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/BC95Udp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/Dns.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/BC95.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/BC95Udp.h"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/NTPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/CoAP.h"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/Dns.h"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/BC95.h"
  "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src/settings.h"
)

target_include_directories(isync_bc95_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/iSYNC_BC95_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(isync_bc95_arduino INTERFACE
    arduino-compat
)
