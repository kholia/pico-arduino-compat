add_library(pac-sparthan-myo INTERFACE)

target_sources(pac-sparthan-myo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-myo/src/myo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-myo/src/myo.h"
  "${CMAKE_CURRENT_LIST_DIR}/sparthan-myo/src/includes/myo_bluetooth.h"
)

target_include_directories(pac-sparthan-myo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sparthan-myo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sparthan-myo INTERFACE
    arduino-compat
)
