add_library(volume2 INTERFACE)

target_sources(volume2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume2/src/volume2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume2/src/volume2.h"
)

target_include_directories(volume2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-volume2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(volume2 INTERFACE
    arduino-compat
)
