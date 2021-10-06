add_library(troykalight INTERFACE)

target_sources(troykalight INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaLight/src/TroykaLight.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaLight/src/TroykaLight.h"
)

target_include_directories(troykalight INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaLight/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(troykalight INTERFACE
    arduino-compat
)
