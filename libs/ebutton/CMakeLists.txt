add_library(pac-ebutton INTERFACE)

target_sources(pac-ebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EButton/EButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EButton/EButton.h"
)

target_include_directories(pac-ebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ebutton INTERFACE
    arduino-compat
)
