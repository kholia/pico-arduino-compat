add_library(tinyscreen INTERFACE)

target_sources(tinyscreen INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyCircuits-TinyScreen_Lib/TinyScreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyCircuits-TinyScreen_Lib/TinyScreen.h"
  "${CMAKE_CURRENT_LIST_DIR}/TinyCircuits-TinyScreen_Lib/font.h"
)

target_include_directories(tinyscreen INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyCircuits-TinyScreen_Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyscreen INTERFACE
    arduino-compat
)
