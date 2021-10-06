add_library(onebutton INTERFACE)

target_sources(onebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OneButton/src/OneButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OneButton/src/OneButton.h"
)

target_include_directories(onebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OneButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(onebutton INTERFACE
    arduino-compat
)
