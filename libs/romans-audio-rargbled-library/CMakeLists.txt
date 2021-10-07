add_library(pac-romans-audio-rargbled-library INTERFACE)

target_sources(pac-romans-audio-rargbled-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RARGBLED/RARGPLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RARGBLED/examples/RGBExample/example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RARGBLED/RARGBLED.h"
)

target_include_directories(pac-romans-audio-rargbled-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RARGBLED"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-romans-audio-rargbled-library INTERFACE
    arduino-compat
)
