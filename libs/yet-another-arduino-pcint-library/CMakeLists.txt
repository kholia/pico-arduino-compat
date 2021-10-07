add_library(pac-yet-another-arduino-pcint-library INTERFACE)

target_sources(pac-yet-another-arduino-pcint-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src/YetAnotherPcInt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src/YetAnotherPcInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src/PinChangeInterruptBoards.h"
)

target_include_directories(pac-yet-another-arduino-pcint-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yet-another-arduino-pcint-library INTERFACE
    arduino-compat
)
