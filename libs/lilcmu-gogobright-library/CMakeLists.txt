add_library(pac-lilcmu-gogobright-library INTERFACE)

target_sources(pac-lilcmu-gogobright-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GoGoBright/src/GoGoBright.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GoGoBright/src/GoGoBright.h"
)

target_include_directories(pac-lilcmu-gogobright-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GoGoBright/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lilcmu-gogobright-library INTERFACE
    arduino-compat
)
