add_library(pac-pushbutton INTERFACE)

target_sources(pac-pushbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pushButton/pushButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pushButton/pushButton.h"
)

target_include_directories(pac-pushbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pushButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pushbutton INTERFACE
    arduino-compat
)
