add_library(volume INTERFACE)

target_sources(volume INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume/src/Volume.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume/src/Volume.h"
)

target_include_directories(volume INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-volume/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(volume INTERFACE
    arduino-compat
)
