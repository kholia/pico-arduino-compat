add_library(pac-audiozero INTERFACE)

target_sources(pac-audiozero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AudioZero/src/AudioZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioZero/src/AudioZero.h"
)

target_include_directories(pac-audiozero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AudioZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-audiozero INTERFACE
    arduino-compat
    pac-sd
)
