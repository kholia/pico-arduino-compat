add_library(button INTERFACE)

target_sources(button INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Button/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Button/Button.h"
)

target_include_directories(button INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Button"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(button INTERFACE
    arduino-compat
)
