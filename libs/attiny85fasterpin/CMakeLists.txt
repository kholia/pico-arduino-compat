add_library(pac-attiny85fasterpin INTERFACE)

target_sources(pac-attiny85fasterpin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-fastpin-library/src/Attiny85IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-fastpin-library/src/Attiny85FasterPin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-fastpin-library/src/Attiny85IO.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-fastpin-library/src/Attiny85FasterPin.h"
)

target_include_directories(pac-attiny85fasterpin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-attiny85-fastpin-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-attiny85fasterpin INTERFACE
    arduino-compat
)
