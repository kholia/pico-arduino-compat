add_library(pac-gyverwdt INTERFACE)

target_sources(pac-gyverwdt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverWDT/src/GyverWDT.h"
)

target_include_directories(pac-gyverwdt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverWDT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverwdt INTERFACE
    arduino-compat
)
