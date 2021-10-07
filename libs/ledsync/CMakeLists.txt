add_library(pac-ledsync INTERFACE)

target_sources(pac-ledsync INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LedSync/src/LedSync.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LedSync/src/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/LedSync/src/LedSync.h"
)

target_include_directories(pac-ledsync INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LedSync/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ledsync INTERFACE
    arduino-compat
)
