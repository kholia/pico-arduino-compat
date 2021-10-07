add_library(pac-gyvermax7219 INTERFACE)

target_sources(pac-gyvermax7219 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverMAX7219/src/GyverMAX7219.h"
)

target_include_directories(pac-gyvermax7219 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverMAX7219/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyvermax7219 INTERFACE
    arduino-compat
)
