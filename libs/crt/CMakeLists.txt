add_library(crt INTERFACE)

target_sources(crt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRT/src/CRT.h"
)

target_include_directories(crt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(crt INTERFACE
    arduino-compat
)
