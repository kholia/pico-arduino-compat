add_library(audiozero INTERFACE)

target_sources(audiozero INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AudioZero/src/AudioZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AudioZero/src/AudioZero.h"
)

target_include_directories(audiozero INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AudioZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(audiozero INTERFACE
    arduino-compat
    official-sd
)
