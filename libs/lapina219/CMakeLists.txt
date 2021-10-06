add_library(lapina219 INTERFACE)

target_sources(lapina219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src/LapINA219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src/LapINA219.h"
  "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src/LapINA219_int.h"
)

target_include_directories(lapina219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lapina219 INTERFACE
    arduino-compat
)
