add_library(pac-esp32-ulp-debugger INTERFACE)

target_sources(pac-esp32-ulp-debugger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UlpDebug/src/UlpDebug.h"
)

target_include_directories(pac-esp32-ulp-debugger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UlpDebug/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32-ulp-debugger INTERFACE
    arduino-compat
)
