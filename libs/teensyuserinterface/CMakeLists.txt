add_library(pac-teensyuserinterface INTERFACE)

target_sources(pac-teensyuserinterface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TeensyUserInterface/src/TeensyUserInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TeensyUserInterface/src/TeensyUserInterface.h"
)

target_include_directories(pac-teensyuserinterface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TeensyUserInterface/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-teensyuserinterface INTERFACE
    arduino-compat
)
