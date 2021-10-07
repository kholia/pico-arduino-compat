add_library(pac-lapina219 INTERFACE)

target_sources(pac-lapina219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src/LapINA219.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src/LapINA219.h"
  "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src/LapINA219_int.h"
)

target_include_directories(pac-lapina219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LapINA219/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lapina219 INTERFACE
    arduino-compat
)
