add_library(teensyuserinterface INTERFACE)

target_sources(teensyuserinterface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TeensyUserInterface/src/TeensyUserInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyUserInterface/src/TeensyUserInterface.h"
)

target_include_directories(teensyuserinterface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TeensyUserInterface/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(teensyuserinterface INTERFACE
    arduino-compat
)
