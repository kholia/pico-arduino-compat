add_library(pac-absmouse INTERFACE)

target_sources(pac-absmouse INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/absmouse/src/AbsMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/absmouse/src/AbsMouse.h"
)

target_include_directories(pac-absmouse INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/absmouse/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-absmouse INTERFACE
    arduino-compat
)
