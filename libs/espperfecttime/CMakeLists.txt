add_library(espperfecttime INTERFACE)

target_sources(espperfecttime INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPPerfectTime/src/sntp_pt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPPerfectTime/src/ESPPerfectTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPPerfectTime/src/sntp_pt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPPerfectTime/src/ESPPerfectTime.h"
)

target_include_directories(espperfecttime INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPPerfectTime/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espperfecttime INTERFACE
    arduino-compat
)
