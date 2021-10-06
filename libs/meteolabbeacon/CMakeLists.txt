add_library(meteolabbeacon INTERFACE)

target_sources(meteolabbeacon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MeteoLabBeacon/MeteoLabBeacon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MeteoLabBeacon/MeteoLabBeacon.h"
)

target_include_directories(meteolabbeacon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MeteoLabBeacon"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(meteolabbeacon INTERFACE
    arduino-compat
)
