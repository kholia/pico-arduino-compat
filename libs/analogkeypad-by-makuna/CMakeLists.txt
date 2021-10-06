add_library(analogkeypad-by-makuna INTERFACE)

target_sources(analogkeypad-by-makuna INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AnalogKeypad/src/AnalogKeypad.h"
)

target_include_directories(analogkeypad-by-makuna INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AnalogKeypad/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(analogkeypad-by-makuna INTERFACE
    arduino-compat
)
