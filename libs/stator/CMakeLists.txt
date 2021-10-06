add_library(stator INTERFACE)

target_sources(stator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Stator/standalone-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Stator/src/Stator.h"
)

target_include_directories(stator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Stator/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stator INTERFACE
    arduino-compat
)
