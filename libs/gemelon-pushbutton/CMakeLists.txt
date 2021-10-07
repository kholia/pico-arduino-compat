add_library(pac-gemelon-pushbutton INTERFACE)

target_sources(pac-gemelon-pushbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pushbutton/src/Pushbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pushbutton/src/Pushbutton.h"
)

target_include_directories(pac-gemelon-pushbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pushbutton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gemelon-pushbutton INTERFACE
    arduino-compat
)
