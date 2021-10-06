add_library(gyverwdt INTERFACE)

target_sources(gyverwdt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverWDT/src/GyverWDT.h"
)

target_include_directories(gyverwdt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverWDT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverwdt INTERFACE
    arduino-compat
)
