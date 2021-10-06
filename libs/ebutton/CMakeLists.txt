add_library(ebutton INTERFACE)

target_sources(ebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EButton/EButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EButton/EButton.h"
)

target_include_directories(ebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ebutton INTERFACE
    arduino-compat
)
