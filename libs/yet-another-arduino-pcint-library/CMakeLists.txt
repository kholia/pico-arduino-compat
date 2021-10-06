add_library(yet-another-arduino-pcint-library INTERFACE)

target_sources(yet-another-arduino-pcint-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src/YetAnotherPcInt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src/YetAnotherPcInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src/PinChangeInterruptBoards.h"
)

target_include_directories(yet-another-arduino-pcint-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoPcIntLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(yet-another-arduino-pcint-library INTERFACE
    arduino-compat
)
