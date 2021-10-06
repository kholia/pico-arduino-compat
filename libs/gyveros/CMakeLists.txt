add_library(gyveros INTERFACE)

target_sources(gyveros INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverOS/src/GyverOS.h"
)

target_include_directories(gyveros INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverOS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyveros INTERFACE
    arduino-compat
)
