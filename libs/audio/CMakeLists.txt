add_library(audio INTERFACE)

target_sources(audio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/DAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/Audio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/DAC.h"
  "${CMAKE_CURRENT_LIST_DIR}/Audio/src/Audio.h"
)

target_include_directories(audio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Audio/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(audio INTERFACE
    arduino-compat
)
