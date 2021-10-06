add_library(awesomeclickbutton INTERFACE)

target_sources(awesomeclickbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Awesome-Click-Button/src/AwesomeClickButton.h"
)

target_include_directories(awesomeclickbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Awesome-Click-Button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(awesomeclickbutton INTERFACE
    arduino-compat
)
