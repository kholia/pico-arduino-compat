add_library(pac-orvibo-wiwo-s20-library INTERFACE)

target_sources(pac-orvibo-wiwo-s20-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OrviboS20_Arduino/src/OrviboS20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OrviboS20_Arduino/src/OrviboS20WiFiPair.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OrviboS20_Arduino/src/OrviboS20.h"
  "${CMAKE_CURRENT_LIST_DIR}/OrviboS20_Arduino/src/OrviboS20WiFiPair.h"
)

target_include_directories(pac-orvibo-wiwo-s20-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OrviboS20_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-orvibo-wiwo-s20-library INTERFACE
    arduino-compat
)
