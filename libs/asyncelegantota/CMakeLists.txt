add_library(asyncelegantota INTERFACE)

target_sources(asyncelegantota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AsyncElegantOTA/src/AsyncElegantOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncElegantOTA/src/elegantWebpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/AsyncElegantOTA/src/Hash.h"
)

target_include_directories(asyncelegantota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AsyncElegantOTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncelegantota INTERFACE
    arduino-compat
)
