add_library(pac-stator INTERFACE)

target_sources(pac-stator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Stator/standalone-example.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Stator/src/Stator.h"
)

target_include_directories(pac-stator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Stator/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stator INTERFACE
    arduino-compat
)
