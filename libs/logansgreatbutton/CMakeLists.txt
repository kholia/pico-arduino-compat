add_library(pac-logansgreatbutton INTERFACE)

target_sources(pac-logansgreatbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LogansGreatButton/src/LogansGreatButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LogansGreatButton/src/LogansGreatButton.h"
)

target_include_directories(pac-logansgreatbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LogansGreatButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-logansgreatbutton INTERFACE
    arduino-compat
)
