add_library(multibutton INTERFACE)

target_sources(multibutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-button/src/PinButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-button/src/MultiButton.h"
)

target_include_directories(multibutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-multi-button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multibutton INTERFACE
    arduino-compat
)
