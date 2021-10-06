add_library(serialdraw INTERFACE)

target_sources(serialdraw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialDraw-Library/src/SerialDraw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialDraw-Library/src/SerialDraw.h"
)

target_include_directories(serialdraw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialDraw-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialdraw INTERFACE
    arduino-compat
)
