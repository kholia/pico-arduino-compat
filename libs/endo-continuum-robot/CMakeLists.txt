add_library(endo-continuum-robot INTERFACE)

target_sources(endo-continuum-robot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Endo-Continuum-Robot-Library/src/Endo-Continuum-Robot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Endo-Continuum-Robot-Library/src/Endo-Continuum-Robot.h"
)

target_include_directories(endo-continuum-robot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Endo-Continuum-Robot-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(endo-continuum-robot INTERFACE
    arduino-compat
)
