add_library(encbutton INTERFACE)

target_sources(encbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EncButton/src/EncButton.h"
)

target_include_directories(encbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EncButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(encbutton INTERFACE
    arduino-compat
)
