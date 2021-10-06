add_library(mh-z14a-library INTERFACE)

target_sources(mh-z14a-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z14A-Library/src/MH-Z14A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z14A-Library/examples/example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z14A-Library/src/MH-Z14A.h"
)

target_include_directories(mh-z14a-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MH-Z14A-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mh-z14a-library INTERFACE
    arduino-compat
)
