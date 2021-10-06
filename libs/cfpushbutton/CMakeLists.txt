add_library(cfpushbutton INTERFACE)

target_sources(cfpushbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cf-arduino-lib-pushbutton/src/CFPushButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cf-arduino-lib-pushbutton/src/CFPushButton.h"
)

target_include_directories(cfpushbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cf-arduino-lib-pushbutton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cfpushbutton INTERFACE
    arduino-compat
)
