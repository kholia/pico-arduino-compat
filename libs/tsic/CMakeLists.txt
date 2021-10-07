add_library(pac-tsic INTERFACE)

target_sources(pac-tsic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tsic/src/TSIC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-tsic/src/TSIC.h"
)

target_include_directories(pac-tsic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-tsic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tsic INTERFACE
    arduino-compat
)
