add_library(pac-arduino-menusystem INTERFACE)

target_sources(pac-arduino-menusystem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-menusystem/MenuSystem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-menusystem/examples/serial_nav/CustomNumericMenuItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-menusystem/examples/serial_nav/MyRenderer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-menusystem/MenuSystem.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-menusystem/examples/serial_nav/MyRenderer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-menusystem/examples/serial_nav/CustomNumericMenuItem.h"
)

target_include_directories(pac-arduino-menusystem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-menusystem"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino-menusystem INTERFACE
    arduino-compat
)
