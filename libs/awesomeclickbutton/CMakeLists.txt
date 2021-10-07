add_library(pac-awesomeclickbutton INTERFACE)

target_sources(pac-awesomeclickbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Awesome-Click-Button/src/AwesomeClickButton.h"
)

target_include_directories(pac-awesomeclickbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Awesome-Click-Button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-awesomeclickbutton INTERFACE
    arduino-compat
)
