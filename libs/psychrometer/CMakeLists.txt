add_library(pac-psychrometer INTERFACE)

target_sources(pac-psychrometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Psychrometer/src/Psychrometer.h"
)

target_include_directories(pac-psychrometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Psychrometer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-psychrometer INTERFACE
    arduino-compat
)
