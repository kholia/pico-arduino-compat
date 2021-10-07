add_library(pac-onebutton INTERFACE)

target_sources(pac-onebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneButton/src/OneButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneButton/src/OneButton.h"
)

target_include_directories(pac-onebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-onebutton INTERFACE
    arduino-compat
)
