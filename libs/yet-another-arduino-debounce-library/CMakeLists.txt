add_library(pac-yet-another-arduino-debounce-library INTERFACE)

target_sources(pac-yet-another-arduino-debounce-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoDebounceLibrary/src/YetAnotherDebouncer.h"
)

target_include_directories(pac-yet-another-arduino-debounce-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoDebounceLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yet-another-arduino-debounce-library INTERFACE
    arduino-compat
)
