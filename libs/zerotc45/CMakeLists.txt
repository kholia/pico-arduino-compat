add_library(pac-zerotc45 INTERFACE)

target_sources(pac-zerotc45 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ZeroTC45/src/ZeroTC45.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ZeroTC45/src/ZeroTC45.h"
)

target_include_directories(pac-zerotc45 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ZeroTC45/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zerotc45 INTERFACE
    arduino-compat
)
