add_library(pac-espsavecrash INTERFACE)

target_sources(pac-espsavecrash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EspSaveCrash/src/EspSaveCrash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EspSaveCrash/src/EspSaveCrash.h"
  "${CMAKE_CURRENT_LIST_DIR}/EspSaveCrash/examples/WebServerCrashCheck/wifiConfig.h"
)

target_include_directories(pac-espsavecrash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EspSaveCrash/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espsavecrash INTERFACE
    arduino-compat
)
