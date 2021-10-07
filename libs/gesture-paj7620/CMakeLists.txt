add_library(pac-gesture-paj7620 INTERFACE)

target_sources(pac-gesture-paj7620 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gesture_PAJ7620/paj7620.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gesture_PAJ7620/paj7620.h"
)

target_include_directories(pac-gesture-paj7620 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gesture_PAJ7620"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gesture-paj7620 INTERFACE
    arduino-compat
)
