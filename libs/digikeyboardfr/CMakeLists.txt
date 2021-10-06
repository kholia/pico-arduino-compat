add_library(digikeyboardfr INTERFACE)

target_sources(digikeyboardfr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DigiKeyboardFr/src/DigiKeyboardFr.h"
)

target_include_directories(digikeyboardfr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DigiKeyboardFr/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digikeyboardfr INTERFACE
    arduino-compat
)
