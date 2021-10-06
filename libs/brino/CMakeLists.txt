add_library(brino INTERFACE)

target_sources(brino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BibliotecaBrino/Brino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BibliotecaBrino/Brino.h"
)

target_include_directories(brino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BibliotecaBrino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(brino INTERFACE
    arduino-compat
)
