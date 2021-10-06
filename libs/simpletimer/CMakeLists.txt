add_library(simpletimer INTERFACE)

target_sources(simpletimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Simpletimer/src/Simpletimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Simpletimer/src/Simpletimer.h"
)

target_include_directories(simpletimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Simpletimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpletimer INTERFACE
    arduino-compat
)
