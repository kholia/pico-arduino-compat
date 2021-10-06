add_library(ssvqueuestackarray INTERFACE)

target_sources(ssvqueuestackarray INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVQueueStackArray/SSVQueueStackArray.h"
)

target_include_directories(ssvqueuestackarray INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVQueueStackArray"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssvqueuestackarray INTERFACE
    arduino-compat
)
