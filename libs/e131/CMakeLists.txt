add_library(pac-e131 INTERFACE)

target_sources(pac-e131 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/E131/E131.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/E131/E131.h"
)

target_include_directories(pac-e131 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/E131"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-e131 INTERFACE
    arduino-compat
)
