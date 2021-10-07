add_library(pac-serialdraw INTERFACE)

target_sources(pac-serialdraw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialDraw-Library/src/SerialDraw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDraw-Library/src/SerialDraw.h"
)

target_include_directories(pac-serialdraw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialDraw-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialdraw INTERFACE
    arduino-compat
)
