add_library(pac-zzzbutton INTERFACE)

target_sources(pac-zzzbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZzzButton/ZzzButton.h"
)

target_include_directories(pac-zzzbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZzzButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zzzbutton INTERFACE
    arduino-compat
)
