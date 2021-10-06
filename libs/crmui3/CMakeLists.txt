add_library(crmui3 INTERFACE)

target_sources(crmui3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/gpio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/ui.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/wi-fi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/CRMui3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/defines.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/CRMui3.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/favicon.ico.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/style.css.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/script.js.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/gauge.js.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/fonticon.woff2.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/font.woff2.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/chart.js.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/notif.css.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/notif.js.h"
  "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src/web/index.html.h"
)

target_include_directories(crmui3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRMui3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(crmui3 INTERFACE
    arduino-compat
)
