add_library(tridenttd_simplepair INTERFACE)

target_sources(tridenttd_simplepair INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_SimplePair/src/TridentTD_common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_SimplePair/src/TridentTD_SimplePair.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_SimplePair/src/TridentTD_SimplePair.h"
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_SimplePair/src/TridentTD_common.h"
)

target_include_directories(tridenttd_simplepair INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TridentTD_SimplePair/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tridenttd_simplepair INTERFACE
    arduino-compat
)
