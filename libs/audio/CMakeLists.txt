add_library(pac-audio INTERFACE)

target_sources(pac-audio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/DAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/Audio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/DAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/Audio.h"
)

target_include_directories(pac-audio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Audio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-audio INTERFACE
    arduino-compat
)
