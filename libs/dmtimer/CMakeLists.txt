add_library(pac-dmtimer INTERFACE)

target_sources(pac-dmtimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Timer/src/dmtimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Timer/src/dmtimer.h"
)

target_include_directories(pac-dmtimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Timer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmtimer INTERFACE
    arduino-compat
)
