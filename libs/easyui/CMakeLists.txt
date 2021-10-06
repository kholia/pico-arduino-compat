add_library(easyui INTERFACE)

target_sources(easyui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/EasyUI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/EasyUI.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/CSS_NORMALIZE.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/JS_JQUERY.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/HTML_PAGE.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/CSS_STYLE.h"
)

target_include_directories(easyui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easyui INTERFACE
    arduino-compat
)
