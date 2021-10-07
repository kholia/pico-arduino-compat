add_library(pac-everytimer INTERFACE)

target_sources(pac-everytimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EveryTimer/src/OneShotTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EveryTimer/src/EveryTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EveryTimer/src/OneShotTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/EveryTimer/src/EveryTimer.h"
)

target_include_directories(pac-everytimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EveryTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-everytimer INTERFACE
    arduino-compat
)
