add_library(m5ez INTERFACE)

target_sources(m5ez INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/src/M5ez.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/src/M5ez.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/src/themes/dark.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/src/themes/default.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/examples/OTA_https/raw_githubusercontent_com.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/examples/M5ez-demo/raw_githubusercontent_com.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/examples/M5ez-demo/images.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5ez/examples/ImagesSPIFFSorSD/images.h"
)

target_include_directories(m5ez INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5ez/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m5ez INTERFACE
    arduino-compat
)
