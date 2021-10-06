add_library(munet INTERFACE)

target_sources(munet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/munet/Examples/all_min/src/munet_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/munet/munet.h"
  "${CMAKE_CURRENT_LIST_DIR}/munet/muserial.h"
  "${CMAKE_CURRENT_LIST_DIR}/munet/mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/munet/net.h"
  "${CMAKE_CURRENT_LIST_DIR}/munet/ota.h"
  "${CMAKE_CURRENT_LIST_DIR}/munet/web.h"
)

target_include_directories(munet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/munet"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(munet INTERFACE
    arduino-compat
)
