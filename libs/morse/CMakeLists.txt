add_library(morse INTERFACE)

target_sources(morse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Morse/Morse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Morse/Morse.h"
)

target_include_directories(morse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Morse"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(morse INTERFACE
    arduino-compat
)
