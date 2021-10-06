add_library(yet-another-arduino-debounce-library INTERFACE)

target_sources(yet-another-arduino-debounce-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoDebounceLibrary/src/YetAnotherDebouncer.h"
)

target_include_directories(yet-another-arduino-debounce-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YetAnotherArduinoDebounceLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(yet-another-arduino-debounce-library INTERFACE
    arduino-compat
)
