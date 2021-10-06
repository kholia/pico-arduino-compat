add_library(gemelon-pushbutton INTERFACE)

target_sources(gemelon-pushbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pushbutton/src/Pushbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pushbutton/src/Pushbutton.h"
)

target_include_directories(gemelon-pushbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pushbutton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gemelon-pushbutton INTERFACE
    arduino-compat
)
