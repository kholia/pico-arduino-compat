add_library(pac-meteolabbeacon INTERFACE)

target_sources(pac-meteolabbeacon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MeteoLabBeacon/MeteoLabBeacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MeteoLabBeacon/MeteoLabBeacon.h"
)

target_include_directories(pac-meteolabbeacon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MeteoLabBeacon"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-meteolabbeacon INTERFACE
    arduino-compat
)
