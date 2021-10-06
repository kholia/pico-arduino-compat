add_library(lorandom INTERFACE)

target_sources(lorandom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LoRandom/src/LoRandom.h"
)

target_include_directories(lorandom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LoRandom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lorandom INTERFACE
    arduino-compat
)
