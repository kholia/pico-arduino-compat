add_library(led INTERFACE)

target_sources(led INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LED/src/LED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LED/src/utility/Morse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LED/src/LED.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LED/src/utility/Morse.h"
)

target_include_directories(led INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-LED/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(led INTERFACE
    arduino-compat
)
