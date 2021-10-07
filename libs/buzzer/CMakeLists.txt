add_library(pac-buzzer INTERFACE)

target_sources(pac-buzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-BUZZER/src/Buzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-BUZZER/src/Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-BUZZER/src/utility/pitches.h"
)

target_include_directories(pac-buzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-BUZZER/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-buzzer INTERFACE
    arduino-compat
)
