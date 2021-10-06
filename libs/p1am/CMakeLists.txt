add_library(p1am INTERFACE)

target_sources(p1am INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/P1AM/src/P1_HSC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/P1AM/src/P1AM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/P1AM/src/Module_List.h"
  "${CMAKE_CURRENT_LIST_DIR}/P1AM/src/P1AM.h"
  "${CMAKE_CURRENT_LIST_DIR}/P1AM/src/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/P1AM/src/P1_HSC.h"
)

target_include_directories(p1am INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/P1AM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(p1am INTERFACE
    arduino-compat
)
