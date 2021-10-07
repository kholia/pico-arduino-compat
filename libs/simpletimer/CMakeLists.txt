add_library(pac-simpletimer INTERFACE)

target_sources(pac-simpletimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Simpletimer/src/Simpletimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simpletimer/src/Simpletimer.h"
)

target_include_directories(pac-simpletimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Simpletimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpletimer INTERFACE
    arduino-compat
)
