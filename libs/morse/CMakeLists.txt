add_library(pac-morse INTERFACE)

target_sources(pac-morse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Morse/Morse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Morse/Morse.h"
)

target_include_directories(pac-morse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Morse"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-morse INTERFACE
    arduino-compat
)
