add_library(ssd1327 INTERFACE)

target_sources(ssd1327 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ssd1327/src/ssd1327.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1327/linux/ssd1327.c"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1327/linux/sample.c"
  "${CMAKE_CURRENT_LIST_DIR}/ssd1327/src/ssd1327.h"
)

target_include_directories(ssd1327 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ssd1327/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssd1327 INTERFACE
    arduino-compat
)
