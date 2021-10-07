add_library(pac-ssvqueuestackarray INTERFACE)

target_sources(pac-ssvqueuestackarray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVQueueStackArray/SSVQueueStackArray.h"
)

target_include_directories(pac-ssvqueuestackarray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVQueueStackArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvqueuestackarray INTERFACE
    arduino-compat
)
