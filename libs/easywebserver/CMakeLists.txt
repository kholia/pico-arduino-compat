add_library(easywebserver INTERFACE)

target_sources(easywebserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyWebServer/src/EasyWebServer.h"
)

target_include_directories(easywebserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyWebServer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easywebserver INTERFACE
    arduino-compat
)
