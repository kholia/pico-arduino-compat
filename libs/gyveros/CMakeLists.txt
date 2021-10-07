add_library(pac-gyveros INTERFACE)

target_sources(pac-gyveros INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverOS/src/GyverOS.h"
)

target_include_directories(pac-gyveros INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverOS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyveros INTERFACE
    arduino-compat
)
