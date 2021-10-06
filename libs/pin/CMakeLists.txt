add_library(pin INTERFACE)

target_sources(pin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pin/src/PinGroup.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pin/src/Pin.h"
)

target_include_directories(pin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pin/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pin INTERFACE
    arduino-compat
)
