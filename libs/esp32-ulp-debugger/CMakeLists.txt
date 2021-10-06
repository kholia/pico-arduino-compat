add_library(esp32-ulp-debugger INTERFACE)

target_sources(esp32-ulp-debugger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UlpDebug/src/UlpDebug.h"
)

target_include_directories(esp32-ulp-debugger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UlpDebug/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32-ulp-debugger INTERFACE
    arduino-compat
)
