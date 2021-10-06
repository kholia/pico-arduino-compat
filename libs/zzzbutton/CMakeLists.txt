add_library(zzzbutton INTERFACE)

target_sources(zzzbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZzzButton/ZzzButton.h"
)

target_include_directories(zzzbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZzzButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(zzzbutton INTERFACE
    arduino-compat
)
