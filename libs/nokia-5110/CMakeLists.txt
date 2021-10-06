add_library(nokia-5110 INTERFACE)

target_sources(nokia-5110 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src/Nokia_5110.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src/Cursor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src/Mux_Rate.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src/Cursor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src/Display_Mode.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src/Nokia_5110.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src/Font.h"
)

target_include_directories(nokia-5110 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nokia_5110/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nokia-5110 INTERFACE
    arduino-compat
)
