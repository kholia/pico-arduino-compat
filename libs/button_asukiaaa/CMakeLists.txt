add_library(pac-button_asukiaaa INTERFACE)

target_sources(pac-button_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-button/src/button_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-button/src/button_asukiaaa.h"
)

target_include_directories(pac-button_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-button_asukiaaa INTERFACE
    arduino-compat
)
