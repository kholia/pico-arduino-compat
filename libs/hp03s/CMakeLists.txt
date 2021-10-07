add_library(pac-hp03s INTERFACE)

target_sources(pac-hp03s INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HP03S/src/HP03S.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HP03S/src/HP03S.h"
)

target_include_directories(pac-hp03s INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HP03S/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hp03s INTERFACE
    arduino-compat
)
