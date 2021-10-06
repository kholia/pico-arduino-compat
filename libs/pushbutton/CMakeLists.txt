add_library(pushbutton INTERFACE)

target_sources(pushbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pushButton/pushButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pushButton/pushButton.h"
)

target_include_directories(pushbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pushButton"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pushbutton INTERFACE
    arduino-compat
)
