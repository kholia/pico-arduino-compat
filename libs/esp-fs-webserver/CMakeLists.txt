add_library(esp-fs-webserver INTERFACE)

target_sources(esp-fs-webserver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/esp-fs-webserver/src/esp-fs-webserver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/esp-fs-webserver/src/setup_htm.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-fs-webserver/src/esp-fs-webserver.h"
  "${CMAKE_CURRENT_LIST_DIR}/esp-fs-webserver/src/edit_htm.h"
)

target_include_directories(esp-fs-webserver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/esp-fs-webserver/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp-fs-webserver INTERFACE
    arduino-compat
)
