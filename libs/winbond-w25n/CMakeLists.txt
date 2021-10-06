add_library(winbond-w25n INTERFACE)

target_sources(winbond-w25n INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WinbondW25N/src/WinbondW25N.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WinbondW25N/src/WinbondW25N.h"
)

target_include_directories(winbond-w25n INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WinbondW25N/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(winbond-w25n INTERFACE
    arduino-compat
)
