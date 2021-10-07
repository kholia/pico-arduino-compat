add_library(pac-easyui INTERFACE)

target_sources(pac-easyui INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/EasyUI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/EasyUI.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/CSS_NORMALIZE.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/JS_JQUERY.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/HTML_PAGE.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src/CSS_STYLE.h"
)

target_include_directories(pac-easyui INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyUI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyui INTERFACE
    arduino-compat
)
