add_library(ili9341-layout-manager INTERFACE)

target_sources(ili9341-layout-manager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/LayoutManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Layer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Panel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Frame.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Field.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Screen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/LayoutManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Frame.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Primitive.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Layer.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Field.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Panel.h"
  "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src/obj/Screen.h"
)

target_include_directories(ili9341-layout-manager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ILI9341-Layout-Manager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(ili9341-layout-manager INTERFACE
    arduino-compat
    adafruit-gfx-library
)
