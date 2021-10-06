add_library(somfy_rts INTERFACE)

target_sources(somfy_rts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/somfy-esp8266/src/Somfy.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/somfy-esp8266/src/Somfy.h"
)

target_include_directories(somfy_rts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/somfy-esp8266/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(somfy_rts INTERFACE
    arduino-compat
)
